#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int     main()
{
	ClapTrap ziad("Ziad");
	ScavTrap speed("Speed");
	FragTrap slow("Slow");

	std::cout << std::endl;

	ziad.attack("Speed"); // working with ClapTrap's attack here!
	speed.guardGate();
	speed.attack("Ziad"); // working with ScavTrap's attack here!
	ziad.takeDamage(20);

	slow.attack("Ziad");
	ziad.takeDamage(30);
	ziad.beRepaired(100);
	slow.highFivesGuys();


	std::cout << std::endl;

	return 0;
}