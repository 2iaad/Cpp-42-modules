#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/**
 * what is deep copy and shallow copy
 * 
 */

void f(){system("leaks ex01");}

int main() {
    Animal* _animal[2];
	_animal[0] = new Dog();
	_animal[1] = new Cat();

    std::cout << std::endl;

	std::string idea("Grab the bone");
	((Dog *)_animal[0])->setIdea(idea);
	std::cout << ((Dog *)_animal[0])->getIdea(99) << std::endl;

    std::cout << std::endl;

    for (int i = 0; i < 2; i++)
        delete _animal[i];
    return 0;
}
