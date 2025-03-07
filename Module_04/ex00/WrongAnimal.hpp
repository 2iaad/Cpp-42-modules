#pragma once

#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal	&operator=(const WrongAnimal &other);
	virtual ~WrongAnimal();

	const	std::string	 	&getType() const;
	void			makeSound() const;
};