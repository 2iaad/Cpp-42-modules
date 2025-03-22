#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(0)
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade)
{
	std::cout << "Bureaucrat Parameterized Constructor called" << std::endl;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		// this->name = other.name; // can't be done since name is a const
		this->grade = other.grade;
	}
	std::cout << "Bureaucrat Copy Assignment Operator called" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

/*---------------#		Member Funtions  	#---------------*/

const std::string	&Bureaucrat::getName() const {
	return this->name;
}

int			Bureaucrat::getGrade() const {
	return this->grade;
}

void			Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void			Bureaucrat::decrementGrade()
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void			Bureaucrat::signForm(AForm &f)
{
    try {
        f.beSigned(*this);
        std::cout << this->name << " signed " << f.getName() << std::endl;
    } catch (AForm::GradeTooLowException &e) {
        std::cout << this->name << " coulnd't sign " << f.getName() << " because " << e.what() << std::endl;
    }
}

void			Bureaucrat::executeForm(AForm const &form) const
{
	try {
        form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return out;
}
