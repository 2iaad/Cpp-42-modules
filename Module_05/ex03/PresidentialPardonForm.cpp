#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &_target) : AForm("PresidentialPardonForm", 25, 5), target(_target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), target(other.target) {
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    (void)other;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (!this->getSigned()) // check that the form is signed
        throw AForm::NotSignedException();
    if (executor.getGrade() > this->getEGrade()) // chack that bureaucrat's grade is high enough
        throw AForm::GradeTooLowException();

	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
