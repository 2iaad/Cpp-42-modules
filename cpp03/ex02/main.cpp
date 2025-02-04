#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int     main()
{
	ClapTrap ziad("ziad");
	ClapTrap chuck("Chuck Norris");
	ClapTrap foreign;
	foreign = chuck;

	FragTrap allo("zbni");

	ScavTrap ndsljfk;

	ziad.attack("Chuck Norris");
	chuck.takeDamage(0);
	chuck.takeDamage(132);
	chuck.attack("Me");
	chuck.beRepaired(2);
	chuck.takeDamage(10);
	foreign.attack("ziad");
	return 0;
}