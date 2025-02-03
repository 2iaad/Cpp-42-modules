#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
// private:
	// std::string	Name;
	// int			Hit_points;
	// int			Energy_points;
	// int			Attack_damage;
public:
	ScavTrap();
	ScavTrap(std::string Name);
	ScavTrap(const ScavTrap &other);
	ScavTrap	&operator=(const ScavTrap &other);
	~ScavTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void guardGate();
}