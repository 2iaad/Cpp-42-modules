#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat x("ziad", 150);
	try
	{
		x.decrementGrade();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}







	// Bureaucrat x2("walid", 1);

	// std::cout << std::endl;
	// x2 = x1;
	// std::cout << std::endl;

	// std::cout << x1;
	// std::cout << x2;

	// std::cout << std::endl;