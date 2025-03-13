#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& _target) : AForm("ShrubberyCreationForm", 25, 5), target(_target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : Form(src), _target(src._target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    (void)other;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
}
