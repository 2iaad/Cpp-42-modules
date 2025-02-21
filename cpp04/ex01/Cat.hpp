#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain *B_ptr;
public:
	Cat();
	Cat(const Cat &other);
	Cat	&operator=(const Cat &other);
	virtual ~Cat();

	const std::string	&getIdea(size_t index) const;
	void setIdeas();

	void	makeSound() const;
};