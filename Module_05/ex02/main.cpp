#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
	Bureaucrat b1("buro1", 2);
	// Bureaucrat b2("buro2", 141);
	

	PresidentialPardonForm obj1("P");
	// ShrubberyCreationForm  obj2("S");

	// AForm *x1 = &obj1;
	// AForm *x2 = &obj2;


	// try { x1->beSigned(b1); } // this will make the form signed
	// catch (std::exception &e) { std::cout << e.what() << std::endl; }

	// std::cout << std::endl;
	// std::cout << x1; // printing x1 infos
	// std::cout << std::endl;
	
	// std::cout << "-------------------" << std::endl;
	
	// std::cout << std::endl;
	// try { x2->beSigned(b2); } // this will throw an exception
	// catch (std::exception &e) { 
	// 	std::cout << "Exception thrown by " << x2->getName() << ": " << e.what() << std::endl; }

	// std::cout << std::endl;
	// std::cout << x2; // printing x2 infos
	// std::cout << std::endl;

	
}