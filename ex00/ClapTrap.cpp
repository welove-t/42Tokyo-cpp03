#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoint(10), _energyPoint(10), _attackPoint(0)
{}

ClapTrap::~ClapTrap(){}

/* setter*/

void	ClapTrap::setHitPoint(unsigned int amount)
{
	this->_hitPoint = amount;
}

void	ClapTrap::setEnergyPoint(unsigned int amount)
{
	this->_energyPoint = amount;
}

void	ClapTrap::setAttackPoint(unsigned int amount)
{
	this->_attackPoint = amount;
}
/* setter*/

/* getter*/
unsigned int	ClapTrap::getHitPoint(void) const
{
	return this->_hitPoint;
}

unsigned int	ClapTrap::getEnergyPoint(void) const
{
	return this->_energyPoint;
}

unsigned int	ClapTrap::getAttackPoint(void) const
{
	return this->_attackPoint;
}
/* getter*/

/* function */
void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoint <= 0)
		std::cout << this->_name << " is no EP !" << std::endl;
	else
	{
		std::cout << GREEN <<
			"ClapTrap " << this->_name <<  " attacks " << target <<
			", causing" << this->_attackPoint << " points of damage! " <<
			RESET << std::endl;
		this->_energyPoint--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint <= amount)
		this->_hitPoint = 0;
	this->_hitPoint -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoint <= 0)
		std::cout << this->_name << " is no EP !" << std::endl;
	else
	{
		_energyPoint--;
		_hitPoint += amount;
	}
}
