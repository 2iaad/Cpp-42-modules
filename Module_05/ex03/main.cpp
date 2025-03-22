#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

void f() { system("leaks ex03"); }

int main()
{
	atexit(f);

	Intern FirstIntern;
	Bureaucrat b1("*HIGH*", 10);
	Bureaucrat b2("*LOW*", 130);

	AForm *form1 = FirstIntern.makeForm("shrubbery creation", "home");
	AForm *form2 = FirstIntern.makeForm("presidential pardon", "jail");



	std::cout << "------------------------" << std::endl;
	AForm *form3 = FirstIntern.makeForm("unavailable form", "jail");
	(void)form3;
	std::cout << "------------------------" << std::endl;
	b1.signForm(*form1);
	std::cout << "	->" << *form1;
	b1.executeForm(*form1);
	std::cout << "\n------------------------" << std::endl;
	b2.signForm(*form2);
	std::cout << "	->" << *form2;
	b2.executeForm(*form2);
	std::cout << "------------------------" << std::endl;

	delete form1;
	delete form2;

	return EXIT_SUCCESS;
}