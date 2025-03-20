#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& _target) : AForm("RobotomyRequestForm", 72, 45), target(_target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), target(other.target) {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    (void)other;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getEGrade())
        throw AForm::GradeTooLowException();
    else
	{
        static int  i;
        if (i % 2 == 0)
            std::cout << "BZZZZZT! " << target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << target << " is still alive." << std::endl;
        i++;
    }
}
