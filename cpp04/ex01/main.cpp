#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

/**
 * @brief subject's test
 * 
 */

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	delete j; //should not create a leak
	delete i;

	std::cout << "\n*********************\n" << std::endl;

/**
 * @brief my test
 * 
 */

    Animal* _animal[2];
	_animal[0] = new Dog();
	_animal[1] = new Cat();

    std::cout << std::endl;

	std::cout << ((Dog *)_animal[0])->getIdea(99) << std::endl;
	std::cout << ((Dog *)_animal[0])->getIdea(98) << std::endl;

    std::cout << std::endl;

    for (int i = 0; i < 2; i++)
        delete _animal[i];
    return 0;
}
