#include <iostream>

void f(std::string& x)
{
	x = "cv?";
}

int main()
{
	std::string x;

	x = "salam";
	std::cout << x << std::endl;

	f(x);

	std::cout << x << std::endl;
}