#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
private:
	std::string	name;
	using FragTrap::Hit_points;
	using ScavTrap::Energy_points;
	using FragTrap::Attack_damage;
	// int			Hit_points;
	// int			Energy_points;
	// int			Attack_damage;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& copy);
	DiamondTrap& operator=(const DiamondTrap &copy);
	~DiamondTrap();

	using ScavTrap::attack;
	void    whoAmI();
};
