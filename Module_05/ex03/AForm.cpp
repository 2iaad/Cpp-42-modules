#include "AForm.hpp"

AForm::AForm(std::string _name, int Sgrade, int Egrade) : name(_name), _signed(false), S_grade(Sgrade), E_grade(Egrade)
{
	std::cout << "AForm Parameterized Constructor called" << std::endl;
	if (this->S_grade > 150)
		throw AForm::GradeTooLowException();
	if (this->S_grade < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &other) : name(other.name), _signed(other._signed), S_grade(other.S_grade), E_grade(other.E_grade)
{
	std::cout << "AForm Copy Constructor called" << std::endl;
}

AForm	&AForm::operator=(const AForm &other)
{
	if (this != &other)
		this->_signed = other._signed;
	std::cout << "AForm Copy Assignment Operator called" << std::endl;
	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called" << std::endl;
}

/*---------------#		Member Funtions  	#---------------*/

const std::string	&AForm::getName() const {
	return this->name;
}

bool				AForm::getSigned() const {
	return this->_signed;
}

int			AForm::getSGrade() const {
	return this->S_grade;
}

int			AForm::getEGrade() const {
	return this->E_grade;
}

void				AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->S_grade)
        throw AForm::GradeTooLowException();
    _signed = true;
}

std::ostream	&operator<<(std::ostream &out, AForm &f)
{
    out	<< "AForm name: " << f.getName() << std::endl
    	<< "Grade to sign: " << f.getSGrade() << std::endl
    	<< "Grade to execute: " << f.getEGrade() << std::endl;
	if (f.getSigned())
		out << "-> Signed: true" << std::endl;
	else
		out << "-> Signed: false" << std::endl;
    return out;
}