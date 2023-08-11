#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackPoint(20);
	std::cout << "system message > ScavTrap Constructor called" << std::endl;
}
