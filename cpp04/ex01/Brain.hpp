#pragma once

#include <iostream>

class Brain {
private:
	std::string ideas[100];
public:

	Brain();
	Brain(const Brain &other);
	Brain	&operator=(const Brain &other);
	virtual	~Brain();

	const std::string	&getIdea(size_t index) const;
	void setIdea(std::string &idea);
};