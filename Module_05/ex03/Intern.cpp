#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern& other) {
    *this = other;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern& other) {
    ( void ) other;
    return (*this);
}

AForm	*Intern::makeForm(std::string name, std::string target) {

	short i = -1;
	const std::string	type[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
		};

	while (++i < 3)
		if (name == type[i]) {
			std::cout << "Intern creates " << name << std::endl;
			break ;
		}
	switch (i)
	{
		case 0:	return (new ShrubberyCreationForm(target));
		case 1: return (new RobotomyRequestForm(target));
		case 2: return (new PresidentialPardonForm(target));
	}
	std::cout << "Intern can't create " << name << " form" << std::endl;
    return NULL;
}