#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoint(10), _energyPoint(10), _attackPoint(0)
{}

ClapTrap::~ClapTrap(){}

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
