#include "Form.hpp"

Form::Form(std::string _name, int grade) : name(_name), _signed(false), S_grade(grade), E_grade(0)
{
	std::cout << "Parameterized Constructor called" << std::endl;
	if (this->S_grade > 150)
		throw Form::GradeTooLowException();
	if (this->S_grade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &other) : name(other.name), _signed(other._signed), S_grade(other.S_grade), E_grade(other.E_grade)
{
	std::cout << "Copy Constructor called" << std::endl;
}

Form	&Form::operator=(const Form &other)
{
	if (this != &other)
		this->_signed = other._signed;
	std::cout << "Copy Assignment Operator called" << std::endl;
	return *this;
}

Form::~Form()
{
	std::cout << "Destructor called" << std::endl;
}

/*---------------#		Member Funtions  	#---------------*/

const std::string	&Form::getName() const {
	return this->name;
}

bool				Form::getSigned() const {
	return this->_signed;
}

int			Form::getSGrade() const {
	return this->S_grade;
}

int			Form::getEGrade() const {
	return this->E_grade;
}

void				Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->S_grade)
        throw Form::GradeTooLowException();
    _signed = true;
}

std::ostream	&operator<<(std::ostream &out, Form &f)
{
    out	<< "Form name: " << f.getName() << std::endl
    	<< "Grade to sign: " << f.getSGrade() << std::endl
    	<< "Grade to execute: " << f.getEGrade();
    return out;
}