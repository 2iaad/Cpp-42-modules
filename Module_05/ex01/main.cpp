#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b1("buro1", 2);
	Form x1("ziad", 10);

	std::cout << std::endl;

	b1.signForm(x1); // this will make the form signed

	std::cout << std::endl;
	std::cout << x1; // printing x1 infos
	std::cout << std::endl;
	
	std::cout << "-------------------\n" << std::endl;
	Bureaucrat b2("buro2", 140);
	Form x2("speed", 40);
	
	std::cout << std::endl;
	
	b2.signForm(x2); // this will throw the exception in beSigned()

	std::cout << std::endl;
	std::cout << x2; // printing x2 infos
	std::cout << std::endl;

	
}