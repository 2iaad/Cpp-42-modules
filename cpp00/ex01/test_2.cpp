#include <iostream>
#include <string>

int main()
{
	std::string str;

	while (std::cin)
	{
		std::getline(std::cin, str);
		std::cout << str << std::endl;
	}
}