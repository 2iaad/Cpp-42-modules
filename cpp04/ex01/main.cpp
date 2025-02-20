#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/**
 * what is deep copy and shallow copy
 * 
 */

void f(){system("leaks ex01");}

int main()
{
	atexit(f);
    Dog	*dogBrain = new Dog();

	std::cout << std::endl;

	dogBrain->makeSound();

	std::string allo = "eat";
	dogBrain->setIdea(allo);
	std::cout << dogBrain->getIdea(0) << std::endl;

	std::cout << std::endl;
	delete dogBrain;
}
