#pragma once

#include <iostream>

class Brain {
public:
	std::string ideas[100];

	Brain();
	Brain(std::string _type);
	Brain(const Brain &other);
	Brain	&operator=(const Brain &other);
	virtual	~Brain();

	const std::string	&getIdea(size_t index);
	void setIdea(std::string &idea) const;
};