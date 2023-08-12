#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
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
	std::cout << this->_name << "DiamondTrap who am I ????" << std::endl;
}
