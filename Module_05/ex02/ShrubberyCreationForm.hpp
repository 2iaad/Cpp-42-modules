#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    std::string	target;
public:
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm	&src);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();

    void execute(const Bureaucrat& executor) const;
};
