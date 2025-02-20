#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &other)  {
	*this = other;
	std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &other) {
	std::cout << "Brain Copy Assignment Operator called" << std::endl;
	if(this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i]  = other.ideas[i];
	}
    return *this;
}

Brain::~Brain() {
	std::cout << "Brain Destructor called" << std::endl;
}

// 			######################################################

const std::string	&Brain::getIdea(size_t index)
{
	if (index >= 100)
		return std::cout << "Can't have that!" << std::endl;
	return ideas[index];
}

void	Brain::setIdea(std::string &idea) const
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}