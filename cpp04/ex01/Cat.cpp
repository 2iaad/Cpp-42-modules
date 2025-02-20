#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat Default Constructor called" << std::endl;
	this->type = "Cat";
	this->B_ptr = new Brain();
}

Cat::Cat(std::string _type) : Animal(_type) {
	std::cout << "Cat Parametrized Constructor called" << std::endl;
	this->type = _type;
	this->B_ptr = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Cat Copy Constructor called" << std::endl;
    this->B_ptr = new Brain(*other.B_ptr);
}

Cat	&Cat::operator=(const Cat &other) {
	std::cout << "Cat Copy Assignment Operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete B_ptr;
        B_ptr = new Brain(*other.B_ptr);
    }
    return *this;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
	delete B_ptr;
}

// 			######################################################

void	Cat::makeSound() const {
    std::cout << "Cat makeSound() called." << std::endl;
}

const std::string	&Cat::getIdea(size_t index) const
{
	return B_ptr->getIdea(index);
}

void Cat::setIdea(std::string &idea)
{
	B_ptr->setIdea(idea);
}