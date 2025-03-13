#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string	target;
public:
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm	&src);
    RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
    ~RobotomyRequestForm();

    void execute(const Bureaucrat& executor) const;
};
