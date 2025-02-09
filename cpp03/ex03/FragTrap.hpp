#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
// private:
	// std::string	name;
	// int			Hit_points;
	// int			Energy_points;
	// int			Attack_damage;
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	FragTrap	&operator=(const FragTrap &other);
	virtual ~FragTrap();

	void highFivesGuys(void);
};