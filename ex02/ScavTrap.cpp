#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackPoint(20);
	std::cout << "system message > ScavTrap Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "system message > ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs): ClapTrap(rhs)
{
	std::cout << "system message > ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this == &rhs)
		return *this;

	this->ClapTrap::operator=(rhs);
	std::cout << "system message > ScavTrap Copy assignment operator called" << std::endl;
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoint() <= 0)
		std::cout << this->getName() << " is no EP !" << std::endl;
	else
	{
		this->setEnergyPoint(this->getEnergyPoint() - 1);
		std::cout << GREEN <<
			"ScavTrap " << this->getName() <<  " attacks " << target <<
			", causing " << this->getAttackPoint() << " points of damage! " <<
			RESET << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << GREEN
		<< this->getName() <<" is Gate Keeper"
		<< RESET << std::endl;
}
