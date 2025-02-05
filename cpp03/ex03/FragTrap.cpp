#include "FragTrap.hpp"

FragTrap::FragTrap () : ClapTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap (std::string Name) : ClapTrap(Name) {
	std::cout << "FragTrap " << this->Name << " Parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
											// Name(other.Name),
											// Hit_points(other.Hit_points),
											// Energy_points(other.Energy_points),
											// Attack_damage(other.Attack_damage)
{
	*this = other;
	std::cout << "FragTrap " << this-> Name << " Copy constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		Name = other.Name;
		Hit_points = other.Hit_points;
		Energy_points = other.Energy_points;
		Attack_damage = other.Attack_damage;
	}
	std::cout << "FragTrap " << this-> Name << " Copy assignment operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this-> Name << " Destructor called" << std::endl;
}

// 			######################################################

void	FragTrap::attack(const std::string& target)
{
	if (Hit_points <= 0 || Energy_points <= 0)
	{
		std::cout << "FragTrap " << this->Name << " Can't attack!" << std::endl;
		return ;
	}
	this->Energy_points--;
	std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;

}

void	highFivesGuys(void)
{
	
}