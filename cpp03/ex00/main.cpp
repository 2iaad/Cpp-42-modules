#include "ClapTrap.hpp"

int     main()
{
	ClapTrap ziad("ziad");
	ClapTrap chuck("Chuck Norris");
	ClapTrap foreign;
	foreign = chuck;

	ziad.attack("Chuck Norris");
	chuck.takeDamage(0);
	chuck.takeDamage(2);
	chuck.beRepaired(2);
	chuck.attack("Me");
	chuck.beRepaired(2);
	chuck.takeDamage(10);
	foreign.attack("ziad");
	return 0;
}