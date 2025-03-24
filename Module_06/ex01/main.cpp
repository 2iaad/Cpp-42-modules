#include "Serializer.hpp"

void printData(const Data *data)
{
	std::cout << std::endl;
	std::cout << "-> Address: " << data << std::endl;
	std::cout << "-> Name: " << data->name << std::endl;
	std::cout << "-> Age: " << data->age << std::endl << std::endl;
}

int main()
{
	Data _obj = {"speed", 7};

	printData(&_obj);

	uintptr_t Serialized = Serializer::serialize(&_obj);
	std::cout << "----> Serialized Address: " << Serialized << std::endl;

	Data *Deserialized = Serializer::deserialize(Serialized);
	std::cout << "----> Deserialized Address: " << Deserialized << std::endl;

	printData(Deserialized);

	return 0;
}