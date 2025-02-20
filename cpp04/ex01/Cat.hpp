#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain *B_ptr;
public:
	Cat();
	Cat(std::string _type);
	Cat(const Cat &other);
	Cat	&operator=(const Cat &other);
	virtual ~Cat();

	const std::string	&getIdea(size_t index) const;
	void setIdea(std::string &idea);

	void	makeSound() const;
};