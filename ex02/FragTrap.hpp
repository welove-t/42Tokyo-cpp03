#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		FragTrap();
	public:
		FragTrap(std::string name);
		~FragTrap();

		FragTrap(const FragTrap& rhs);
		FragTrap& operator=(const FragTrap& rhs);

		void	highFivesGuys(void);

};

#endif
