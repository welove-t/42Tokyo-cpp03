#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoint(10), _energyPoint(10), _attackPoint(0)
{
	std::cout << "system message > ClapTrap Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "system message > ClapTrap Destructor called" << std::endl;
}

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
std::string		ClapTrap::getName(void)const
{
	return this->_name;
}

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
	if (_energyPoint <= 0)
		std::cout << _name << " is no EP !" << std::endl;
	else
	{
		_energyPoint--;
		std::cout << GREEN <<
			"ClapTrap " << _name <<  " attacks " << target <<
			", causing " << _attackPoint << " points of damage! " <<
			RESET << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint <= amount)
		_hitPoint = 0;
	else
		_hitPoint -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoint <= 0)
		std::cout << _name << " is no EP !" << std::endl;
	else
	{
		_energyPoint--;
		_hitPoint += amount;
		_energyPoint--;
		std::cout << GREEN <<
			"ClapTrap " << _name <<  " repaired "  << amount <<
			RESET << std::endl;
	}
}

void	ClapTrap::printStatus(void) const
{
	std::cout << YELLOW <<
	"> " << _name << std::endl <<
	"HP: " << _hitPoint << std::endl <<
	"EP: " << _energyPoint << std::endl <<
	"AP: " << _attackPoint << std::endl <<
	RESET << std::endl;
	if (_hitPoint <= 0)
		std::cout << RED <<
			_name <<  " is dead " <<
			RESET << std::endl;
}
