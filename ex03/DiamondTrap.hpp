#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
d
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string		_name;
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		using	ScavTrap::atack;
		void	whoAmI();
};

#endif
