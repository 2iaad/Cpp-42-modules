#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	this->B_ptr = new Brain();
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(std::string _type) : Animal(_type) {
	this->type = _type;
	this->B_ptr = new Brain();
	std::cout << "Dog Parametrized Constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    this->B_ptr = new Brain(*other.B_ptr);
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &other) {
    if (this != &other) {
        Animal::operator=(other);
        delete B_ptr;
        B_ptr = new Brain(*other.B_ptr);
    }
	std::cout << "Dog Copy Assignment Operator called" << std::endl;
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