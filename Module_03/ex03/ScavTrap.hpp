#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
// private:
	// std::string	name;
	// int			Hit_points;
	// int			Energy_points;
	// int			Attack_damage;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	ScavTrap	&operator=(const ScavTrap &other);
	virtual ~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};