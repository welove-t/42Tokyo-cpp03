#include "ClapTrap.hpp"

int main( void )
{
	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"               ClapTrap !" 				<< std::endl <<
		"            pikachu vs pichu)" 			<< std::endl <<
		"------------------------------------------" << std::endl <<
	RESET << std::endl;

	ClapTrap pikachu("pikachu");
	ClapTrap pichu("pichu");

	pikachu.printStatus();
	pichu.printStatus();
	pikachu.setAttackPoint(8);
	pichu.setAttackPoint(4);

	std::cout << BLUE <<
		"     pikachu -> pichu     " 				<< std::endl <<
	RESET << std::endl;
	pikachu.attack("pichu");
	pichu.takeDamage(pikachu.getAttackPoint());
	pikachu.printStatus();
	pichu.printStatus();

	return 0;
}
