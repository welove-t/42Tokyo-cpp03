#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define RED		"\e[0;31m" // Red
#define GREEN	"\e[0;32m" // Green
#define YELLOW	"\e[0;33m" // Yellow
#define BLUE	"\e[0;34m" // Blue
#define RESET 	"\e[0m"    // Reset

class ClapTrap
{
	private:
	protected:
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackPoint;
		ClapTrap();
	public:
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap(const ClapTrap& rhs);
		ClapTrap& operator=(const ClapTrap& rhs);

		void			setHitPoint(unsigned int amount);
		void			setEnergyPoint(unsigned int amount);
		void			setAttackPoint(unsigned int amount);
		std::string		getName(void) const;
		unsigned int	getHitPoint(void) const;
		unsigned int	getEnergyPoint(void) const;
		unsigned int	getAttackPoint(void) const;
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			printStatus(void) const;
};

#endif
