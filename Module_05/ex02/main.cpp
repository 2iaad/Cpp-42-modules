#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
	Bureaucrat b1("*HIGH*", 10);
	Bureaucrat b2("*LOW*", 1);

	ShrubberyCreationForm  form1("SC");
	PresidentialPardonForm form2("PP");

	std::cout << "----------------" << std::endl;
	b1.signForm(form1);
	b1.executeForm(form1);
	std::cout << "----------------" << std::endl;
	// b2.signForm(form2);
	b2.executeForm(form2);
	std::cout << "----------------" << std::endl;

	return EXIT_SUCCESS;
}