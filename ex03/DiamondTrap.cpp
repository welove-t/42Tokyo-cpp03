#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	FragTrap::_hitPoint = 100;
	ScavTrap::_energyPoint = 50;
	FragTrap::_attackPoint = 30;
	std::cout << "system message > DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "system message > DiamondTrap Destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << this->_name << " who am I ????" << std::endl;
}
