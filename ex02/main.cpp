#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"                 ClapTrap !" 				<< std::endl <<
		std::endl <<
		"             pikachu vs pichu" 			<< std::endl <<
		"------------------------------------------" << std::endl <<
	RESET << std::endl;

	ScavTrap pikachu("pikachu");
	ClapTrap pichu("pichu");

	pikachu.guardGate();
	pikachu.printStatus();
	pichu.printStatus();
	pichu.setAttackPoint(4);

	// pichu -> pikachu
	pichu.attack("pikachu");
	pikachu.takeDamage(pichu.getAttackPoint());
	pikachu.printStatus();
	pichu.printStatus();

	// // pikachu repaire
	pikachu.beRepaired(4);
	pikachu.printStatus();
	pichu.printStatus();

	// // pikachu -> pichu
	pikachu.attack("pichu");
	pichu.takeDamage(pikachu.getAttackPoint());
	pikachu.printStatus();
	pichu.printStatus();

	// // pikachu -> pichu
	// pikachu.attack("pichu");
	// pichu.takeDamage(pikachu.getAttackPoint());
	// pikachu.printStatus();
	// pichu.printStatus();

	return 0;
}
