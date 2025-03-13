#pragma once

#include "AForm.hpp"
#include <iostream>

/**
 * @brief I should throw an exception if i try to init the grade with invalide grade
 * Bureaucrat::GradeTooHighException
 * Bureaucrat::GradeTooLowException
 * getName()
 * getGrade()
 * Im-plement also two member functions to increment or decrement the bureaucrat grade.
 * If the grade is out of range, both of them will throw the same exceptions as the constructor.
 * Incrementing a grade 3 should give a grade 2 to the bureaucrat.
 * Implement overload of the insertion (<<) that prints this-> (<name>, bureaucrat grade <grade>.)
 * 
 */

class	Form;

class Bureaucrat {
private:
	const std::string	name;
	int					grade; // ---> this should range between 1-150
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
			 // "noexcept" assures that this function wont throw an exception later on.
	};
	 
	class GradeTooHighException : public std::exception {
		public:
			const char*		what() const throw() { return "Grade Too High"; }
	};
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat &b);
