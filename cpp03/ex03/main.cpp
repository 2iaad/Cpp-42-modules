#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap claptrap("clap");
	std::cout << "**************" << std::endl;
	ScavTrap scavtrap("scav");
	std::cout << "**************" << std::endl;
	FragTrap fragtrap("frag");
	std::cout << "**************" << std::endl;
	DiamondTrap diamondtrap("diamond");

	std::cout << "\n**************\n**************\n" << std::endl;



	claptrap.attack("Enemy1");
	claptrap.takeDamage(6);
	claptrap.beRepaired(5);
    std::cout << "**************" << std::endl;
	claptrap.attack("Enemy2");
	claptrap.takeDamage(15);
	claptrap.beRepaired(9);
	std::cout << "**************" << std::endl;
	scavtrap.attack("Enemy3");
	scavtrap.takeDamage(14);
	scavtrap.guardGate();
	std::cout << "**************" << std::endl;
	fragtrap.attack("Enemy4");
	fragtrap.takeDamage(11);
	fragtrap.highFivesGuys();
	std::cout << "**************" << std::endl;
	diamondtrap.whoAmI();

	std::cout << "\n**************\n**************\n" << std::endl;


    return 0;
}