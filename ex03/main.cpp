#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"                 ClapTrap !" 				<< std::endl <<
		std::endl <<
		"             pikachu vs pichu" 			<< std::endl <<
		"------------------------------------------" << std::endl <<
	RESET << std::endl;

	ClapTrap pichu("pichu");
	ScavTrap pikachu("pikachu");
	FragTrap raichu("raichu");
	DiamondTrap bugchu("bugchu");

	pikachu.guardGate();
	raichu.highFivesGuys();
	pichu.printStatus();
	pikachu.printStatus();
	raichu.printStatus();
	bugchu.printStatus();
	pichu.setAttackPoint(4);

	// bugchu -> pichu
	bugchu.attack("pichu");
	pichu.takeDamage(bugchu.getAttackPoint());
	pichu.printStatus();
	pikachu.printStatus();
	raichu.printStatus();
	bugchu.printStatus();

	// // pikachu -> pichu
	// pikachu.attack("pichu");
	// pichu.takeDamage(pikachu.getAttackPoint());
	// pikachu.printStatus();
	// pichu.printStatus();

	return 0;
}
