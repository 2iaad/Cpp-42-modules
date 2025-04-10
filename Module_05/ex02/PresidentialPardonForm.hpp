#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string	target;
public:
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm	&other);
    PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
    ~PresidentialPardonForm();

    void execute(const Bureaucrat& executor) const;
};
