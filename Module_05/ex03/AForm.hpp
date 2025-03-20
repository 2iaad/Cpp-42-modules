#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class	Bureaucrat;

class AForm {
private:
	const std::string	name;
	bool				_signed;
	const int			S_grade;
	const int			E_grade;
public:
	AForm(std::string _name, int Sgrade, int Egrade);
	AForm(const AForm &other);
	AForm	&operator=(const AForm &other);
	virtual	~AForm();

	const std::string	&getName() const;
	bool				getSigned() const;
	int					getSGrade() const;
	int					getEGrade() const;

	void				beSigned(Bureaucrat &b);

	virtual	void		execute(Bureaucrat const &executor) const = 0;

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
	class NotSignedException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Form not signed"; }
    };
};

std::ostream	&operator<<(std::ostream &out, AForm &f);
