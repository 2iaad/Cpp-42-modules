#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer Constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &other)
{
	*this = other;
	std::cout << "Serializer Copy Constructor called" << std::endl;
}

Serializer	&Serializer::operator=(const Serializer &other)
{
	if (this != &other) {
	}
	std::cout << "Serializer Copy Assignment Operator called" << std::endl;
	return *this;
}

Serializer::~Serializer()
{
	std::cout << "Serializer Destructor called" << std::endl;
}

/* -----------#  Member functions  #----------- */

uintptr_t	Serializer::serialize(Data *ptr)
{
	return reinterpret_cast< uintptr_t >(ptr) ;
}

Data		*Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast< Data* >(raw) ;
}
