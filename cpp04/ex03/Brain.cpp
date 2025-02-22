#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default Constructor called" << std::endl;
	this->setIdeas();
}

Brain::Brain(const Brain &other)  {
	std::cout << "Brain Copy Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
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

const std::string	Brain::getIdea(size_t index) const
{
	if (index >= 100)
		return "";
	return ideas[index];
}

void	Brain::setIdeas()
{
	unsigned short int j;
	std::string arr[3] = {eat, sleep, play};

	for (int i = 0; i < 100; i++)
	{
		j = rand() % 3;
		this->ideas[i] = arr[j];
	}

}