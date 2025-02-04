#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
// private:
	// std::string	Name;
	// int			Hit_points;
	// int			Energy_points;
	// int			Attack_damage;
public:
	FragTrap();
	FragTrap(std::string Name);
	FragTrap(const FragTrap &other);
	FragTrap	&operator=(const FragTrap &other);
	~FragTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void highFivesGuys(void);
};