#pragma once

#include <iostream>
#include<cstdlib>

#define eat "I need to eat"
#define sleep "I need to sleep"
#define play "I need to play"

class Brain {
private:
	std::string ideas[100];
public:

	Brain();
	Brain(const Brain &other);
	Brain	&operator=(const Brain &other);
	~Brain();

	const std::string	getIdea(size_t index) const;
	void setIdeas();
};
