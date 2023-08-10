#include "ClapTrap.hpp"

int main( void )
{
	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"                 ClapTrap !" 				<< std::endl <<
		std::endl <<
		"             pikachu vs pichu" 			<< std::endl <<
		"------------------------------------------" << std::endl <<
	RESET << std::endl;

	ClapTrap pikachu("pikachu");
	ClapTrap pichu("pichu");

	pikachu.printStatus();
	pichu.printStatus();
	pikachu.setAttackPoint(8);
	pichu.setAttackPoint(4);

	// pikachu -> pichu
	pikachu.attack("pichu");
	pichu.takeDamage(pikachu.getAttackPoint());
	pikachu.printStatus();
	pichu.printStatus();

	// pichu repaire
	pichu.beRepaired(4);
	pikachu.printStatus();
	pichu.printStatus();

	// pichu -> pikachu
	pichu.attack("pikachu");
	pikachu.takeDamage(pichu.getAttackPoint());
	pikachu.printStatus();
	pichu.printStatus();

	// pikachu -> pichu
	pikachu.attack("pichu");
	pichu.takeDamage(pikachu.getAttackPoint());
	pikachu.printStatus();
	pichu.printStatus();

	return 0;
}
