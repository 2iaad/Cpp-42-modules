#include <iostream>
#include <string>

int main()
{
	std::string str;

	str = "salam-ana zderfouf, aka a9wad wahd f bbfoot";
	std::size_t x = str.find("zderfouf");

	str.erase(x, );

	std::cout << str << std::endl;
}