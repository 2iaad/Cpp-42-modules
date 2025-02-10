#include "ClapTrap.hpp"

int     main()
{
	ClapTrap A("Ziad");
	ClapTrap B("Speed");

	std::cout << std::endl;

	A.attack("Speed");
	B.takeDamage(5);
	B.beRepaired(4);

	std::cout << std::endl;

	B.attack("Ziad");
	A.takeDamage(10);
	A.takeDamage(9);
	A.attack("Speed");

	std::cout << std::endl;

	return 0;
}