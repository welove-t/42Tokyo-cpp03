#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	pikachu.guardGate();
	raichu.highFivesGuys();
	pichu.printStatus();
	pikachu.printStatus();
	raichu.printStatus();
	pichu.setAttackPoint(4);

	// raichu -> pichu
	raichu.attack("pichu");
	pichu.takeDamage(raichu.getAttackPoint());
	pichu.printStatus();
	pikachu.printStatus();
	raichu.printStatus();

	// // pikachu -> pichu
	// pikachu.attack("pichu");
	// pichu.takeDamage(pikachu.getAttackPoint());
	// pikachu.printStatus();
	// pichu.printStatus();

	return 0;
}
