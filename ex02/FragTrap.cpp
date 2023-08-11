#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttackPoint(30);
	std::cout << "system message > FragTrap Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "system message > FragTrap Destructor called" << std::endl;
}
