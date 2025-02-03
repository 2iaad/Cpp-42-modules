#include "ScavTrap.hpp"

ScavTrap::ScavTrap () : Name("Name"),
						Hit_points(100),
						Energy_points(50),
						Attack_damage(20) {
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap (std::string Name) : Name(Name),
										Hit_points(100),
										Energy_points(50),
										Attack_damage(20) {
	std::cout << "ScavTrap " << this-> Name << " Parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : Name(other.Name),
											Hit_points(other.Hit_points),
											Energy_points(other.Energy_points),
											Attack_damage(other.Attack_damage)
{
	std::cout << "ScavTrap " << this-> Name << " Copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		Name = other.Name;
		Hit_points = other.Hit_points;
		Energy_points = other.Energy_points;
		Attack_damage = other.Attack_damage;
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