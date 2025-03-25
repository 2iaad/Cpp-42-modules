#pragma once

#include <iostream>

struct Data {
	std::string	name;
	size_t		age;
};

class Serializer {
private:
	Serializer();
	Serializer(const Serializer &other);
public:
	Serializer	&operator=(const Serializer &other);
	~Serializer();

	static	uintptr_t	serialize(Data* ptr);
	static	Data*		deserialize(uintptr_t raw);
};
