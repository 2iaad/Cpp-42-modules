#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap () : ClapTrap() {
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap (std::string Name) : ClapTrap(Name + "_clap_name"), ScavTrap(Name), FragTrap(Name) {
	this->Name = Name;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "DiamondTrap " << this->Name << " Parameterized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other.Name + "_clap_name"), ScavTrap(other.Name), FragTrap(other.Name)
{
	this->Name = other.Name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	std::cout << "DiamondTrap " << this-> Name << " Copy constructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		this->Name = other.Name;
		this->Hit_points = other.Hit_points;
		this->Energy_points = other.Energy_points;
		this->Attack_damage = other.Attack_damage;
	}
	std::cout << "DiamondTrap " << this-> Name << " Copy assignment operator called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this-> Name << " Destructor called" << std::endl;
}

// 			######################################################

void    DiamondTrap::whoAmI()
{
    std::cout << "call whoAmI from diamondTrap" << std::endl;
    std::cout << "DiamonTrap " << this->Name << std::endl;
    std::cout << "ClapTrap" << ClapTrap::Name << std::endl;
}