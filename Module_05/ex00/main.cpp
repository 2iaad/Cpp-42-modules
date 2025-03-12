#include "Bureaucrat.hpp"

int main()
{
	{
		Bureaucrat x("ziad", 150);
		try {
			std::cout << x;
			x.decrementGrade();
		}
		catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	/*			initing Bureaucrat with invalide Grade			*/

	{
		try  {
			Bureaucrat x("ziad", 151);
			std::cout << x;
		}
		catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
}




	// Bureaucrat x2("walid", 1);

	// std::cout << std::endl;
	// x2 = x1;
	// std::cout << std::endl;

	// std::cout << x1;
	// std::cout << x2;

	// std::cout << std::endl;