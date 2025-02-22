#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main()
{
	ClapTrap ziad("Ziad");
	ScavTrap speed("Speed");

	std::cout << std::endl;

	ziad.attack("Speed"); // working with ClapTrap's attack here!
	speed.takeDamage(5);
	speed.guardGate();
	speed.attack("Ziad"); // working with ScavTrap's attack here!
	ziad.takeDamage(20);
	ziad.takeDamage(20);

	std::cout << std::endl;

	return 0;
}