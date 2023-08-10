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


void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint <= amount)
		this->_hitPoint = 0;
	this->_hitPoint -= amount;
	std::cout << BLUE <<
		this->_name << " takes " << amount << "damage" <<
		RESET << std::endl;
}
