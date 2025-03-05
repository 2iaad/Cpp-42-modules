#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain *B_ptr;
public:
	Dog();
	Dog(const Dog &other);
	Dog	&operator=(const Dog &other);
	~Dog();

	const std::string	getIdea(size_t index) const;

	void	makeSound() const;
};