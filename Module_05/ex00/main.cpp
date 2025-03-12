#include "Bureaucrat.hpp"

int main()
{
	// Bureaucrat x;
	try
	{
		Bureaucrat x1("ziad", 150);
		x1.decrementGrade();
	}
	catch(std::string)
	{
		std::cerr << "in main" << '\n';
	}

	// Bureaucrat x2("walid", 1);

	// std::cout << std::endl;
	// x2 = x1;
	// std::cout << std::endl;

	// std::cout << x1;
	// std::cout << x2;

	// std::cout << std::endl;
}