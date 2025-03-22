#pragma once

#include "Form.hpp"
#include <iostream>

class	Form;

class Bureaucrat {
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat();
	Bureaucrat(std::string _name, int _grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat	&operator=(const Bureaucrat &other);
	~Bureaucrat();

	const std::string	&getName() const;
	int					getGrade() const;
	void				incrementGrade();
	void				decrementGrade();

	void				signForm(Form &f);
/*---------------#		Classes  	#---------------*/

	class GradeTooLowException : public std::exception {
		public:
			const char*		what() const throw() { return "Grade Too Low"; }
	};
	 
	class GradeTooHighException : public std::exception {
		public:
			const char*		what() const throw() { return "Grade Too High"; }
	};
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat &b);
