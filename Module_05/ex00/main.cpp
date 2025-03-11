#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat x;
	Bureaucrat x1("ziad", 19);
	Bureaucrat x2("walid", 1);

	std::cout << std::endl;
	x2 = x1;

	std::cout << std::endl;

	std::cout << x1;
	std::cout << x2;

	std::cout << std::endl;

}