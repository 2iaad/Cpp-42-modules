#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
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

	void highFivesGuys(void);
};