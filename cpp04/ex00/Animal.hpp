#pragma once

#include <iostream>

class Animal{
protected:
	std::string type;
public:
	Animal();
	Animal(std::string _type);
	Animal(const Animal &other);
	Animal	&operator=(const Animal &other);
	virtual	~Animal();

	const	std::string	 	&getType() const;
	virtual	void			makeSound() const;
};