#pragma once

#include <iostream>

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

/*---------------#		Classes  	#---------------*/

	class GradeTooLowException : public std::exception {
		public:
			const char*		what() const throw() { return "Grade Too Low"; }
			 // "noexcept" assures that this function wont throw an exception later on.
	};
	 
	class GradeTooHighException : public std::exception {
		public:
			const char*		what() const throw() { return "Grade Too High"; }
	};
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat &b);
