#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat	&operator=(const WrongCat &other);
	~WrongCat();

	const	std::string	&getType() const;
	void				makeSound() const;
};