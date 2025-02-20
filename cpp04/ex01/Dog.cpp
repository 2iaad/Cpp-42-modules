#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog Default Constructor called" << std::endl;
	this->type = "Dog";
	this->B_ptr = new Brain();
}

Dog::Dog(std::string _type) : Animal(_type) {
	std::cout << "Dog Parametrized Constructor called" << std::endl;
	this->type = _type;
	this->B_ptr = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "Dog Copy Constructor called" << std::endl;
    this->B_ptr = new Brain(*other.B_ptr);
}

Dog	&Dog::operator=(const Dog &other) {
	std::cout << "Dog Copy Assignment Operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete B_ptr;
        B_ptr = new Brain(*other.B_ptr);
    }
    return *this;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
	delete B_ptr;
}

// 			######################################################

void	Dog::makeSound() const {
    std::cout << "Dog makeSound() called." << std::endl;
}

const std::string	&Dog::getIdea(size_t index) const
{
	return B_ptr->getIdea(index);
}

void Dog::setIdea(std::string &idea)
{
	B_ptr->setIdea(idea);
}