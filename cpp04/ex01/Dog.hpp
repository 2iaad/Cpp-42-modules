#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain *B_ptr;
public:
	Dog();
	Dog(std::string _type);
	Dog(const Dog &other);
	Dog	&operator=(const Dog &other);
	virtual	~Dog();

	const std::string	&getIdea(size_t index) const;
	void setIdea(std::string &idea);

	void	makeSound() const;
};