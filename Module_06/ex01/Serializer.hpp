#pragma once

#include <iostream>

struct Data {
	std::string	name;
	size_t		age;
};

class Serializer {
private:
	Serializer();
public:
	Serializer(const Serializer &other);
	Serializer	&operator=(const Serializer &other);
	~Serializer();

	static	uintptr_t	serialize(Data* ptr);
	static	Data*		deserialize(uintptr_t raw);
};
