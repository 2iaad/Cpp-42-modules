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

    std::string	formNames[] = {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation"
    };
    AForm	*forms[] = {
        new PresidentialPardonForm(target),
        new RobotomyRequestForm(target),
        new ShrubberyCreationForm(target)
    };
    
    for (int i = 0; i < 3; i++) {
        if (name == formNames[i]) {
            std::cout << "Intern creates " << name << std::endl;
            return forms[i];
        }
    }
    std::cout << "Intern cannot create " << name << " form" << std::endl;
    return NULL;
}