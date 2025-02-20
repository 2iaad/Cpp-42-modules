#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/**
 * what is deep copy and shallow copy
 * 
 */

int main()
{
    Dog	*dogBrain = new Dog();

	std::cout << std::endl;

	dogBrain->makeSound();


	dogBrain->setIdea("eat");
	std::cout << dogBrain->getIdea(0) << std::endl;

	std::cout << std::endl;
	delete dogBrain;
}
