#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) try : name(_name), grade(_grade)
{
	if (this->grade > 150 || this->grade < 1)
		throw (std::string)"Grade is either too high or too low";
	std::cout << "Parameterized Constructor called" << std::endl;
}
catch(std::string)
{
	std::cout << "In constructor catch" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
	std::cout << "Copy Constructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		// this->name = other.name; // can't be done since name is a const
		this->grade = other.grade;
	}
	std::cout << "Copy Assignment Operator called" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

/*								#######################								*/

const std::string	&Bureaucrat::getName() const
{
	return this->name;
}

int			Bureaucrat::getGrade() const
{
	return this->grade;
}

void			Bureaucrat::incrementGrade()
{
	try
	{
		this->grade--;
		std::cout << this->grade << std::endl;
		throw (std::string)"Can't increment grade";
	}
	catch(std::string)
	{
		std::cout << "First catch" << std::endl;
	}
}

void			Bureaucrat::decrementGrade()
{
	try
	{
		this->grade++;
		throw (std::string)"Can't decrement grade";
	}
	catch(std::string)
	{
		std::cout << "First catch" << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat &b )
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return out;
}
