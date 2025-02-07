#include "ScavTrap.hpp"

ScavTrap::ScavTrap () : ClapTrap() {
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap (std::string Name) : ClapTrap(Name) {
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "ScavTrap " << this->Name << " Parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other.Name)
{
	this->Name = other.Name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	std::cout << "ScavTrap " << this-> Name << " Copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->Name = other.Name;
		this->Hit_points = other.Hit_points;
		this->Energy_points = other.Energy_points;
		this->Attack_damage = other.Attack_damage;
	}
	std::cout << "ScavTrap " << this-> Name << " Copy assignment operator called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this-> Name << " Destructor called" << std::endl;
}

// 			######################################################

void	ScavTrap::attack(const std::string& target)
{
	if (Hit_points <= 0 || Energy_points <= 0)
	{
		std::cout << "ScavTrap " << this->Name << " Can't attack!" << std::endl;
		return ;
	}
	this->Energy_points--;
	std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;

}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name << "is now in Gate keeper mode." << std::endl;
}