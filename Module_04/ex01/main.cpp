#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

/**
 * @brief subject's test
 * 
 */

	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;

		delete j; //should not create a leak
		delete i;
	}

	std::cout << "\n*********************\n" << std::endl;

/**
 * @brief my test
 * 
 */

    Animal* _animal[2];
	_animal[0] = new Dog();
	_animal[1] = new Cat();

    std::cout << std::endl;

	std::cout << _animal[0]->getType() << std::endl;
	std::cout << _animal[1]->getType() << std::endl;

    std::cout << std::endl;

	std::cout << ((Dog *)_animal[0])->getIdea(95) << std::endl;
	std::cout << ((Cat *)_animal[1])->getIdea(95) << std::endl;

    std::cout << std::endl;

    for (int i = 0; i < 2; i++)
        delete _animal[i];
    return 0;

/**
 * @brief testing the deep copy
 * 
 */
	{
		Dog basic;
		{
			Dog tmp;

			std::cout << "******\n";
			std::cout << basic.getIdea(0) << std::endl;
			std::cout << tmp.getIdea(0) << std::endl;
			std::cout << "******\n";

			tmp = basic;

			std::cout << "******\n";
			std::cout << tmp.getIdea(0) << std::endl;
			std::cout << basic.getIdea(0) << std::endl;
			std::cout << "******\n";
		}
	}
}
