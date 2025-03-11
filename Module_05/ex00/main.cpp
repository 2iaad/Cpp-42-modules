#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat x;
	Bureaucrat x1("ziad", 19);
	Bureaucrat x2("walid", 1);

	std::cout << std::endl;
	x2 = x1;
	std::cout << std::endl;

	std::cout << x.getGrade() << std::endl;
	std::cout << x1.getGrade() << std::endl;
	std::cout << x2.getGrade() << std::endl;
}