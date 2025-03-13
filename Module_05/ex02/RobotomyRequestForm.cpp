#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& _target) : AForm("RobotomyRequestForm", 25, 5), target(_target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : Form(src), _target(src._target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    (void)other;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
}
