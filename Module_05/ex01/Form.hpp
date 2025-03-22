#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class	Bureaucrat;

class Form {
private:
	const std::string	name;
	bool				_signed;
	const int			S_grade;
	const int			E_grade;
public:
	Form(std::string _name, int grade);
	Form(const Form &other);
	Form	&operator=(const Form &other);
	~Form();

	const std::string	&getName() const;
	bool				getSigned() const;
	int					getSGrade() const;
	int					getEGrade() const;

	void				beSigned(Bureaucrat &b);

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

std::ostream	&operator<<(std::ostream &out, Form &f);
