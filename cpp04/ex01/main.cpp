#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/**
 * what is deep copy and shallow copy
 * 
 */

void f(){system("leaks ex01");}

int main() {

    std::cout << "-------------------------------------" << std::endl;

    Dog* malinois = new Dog();
    malinois->setIdea("Chase the ball!");

    std::cout << "-------------------------------------" << std::endl;

    Dog* malinois2 = new Dog(*malinois);

    std::cout << "-------------------------------------" << std::endl;

    std::cout << "malinois Idea : " << malinois->getIdea(0) << std::endl;
    std::cout << "malinois2 Idea : " << malinois2->getIdea(0) << std::endl;

    std::cout << "-------------------------------------" << std::endl;

    malinois->setIdea("Sleep on the couch.");

    std::cout << "malinois New Idea : " << malinois->getIdea(0) << std::endl;
    std::cout << "malinois2 New Idea : " << malinois2->getIdea(0) << std::endl;

    std::cout << "-------------------------------------" << std::endl;

    delete malinois;
    delete malinois2;

    std::cout << "-------------------------------------" << std::endl;

    Animal* animals[2];

    animals[0] = new Dog();

    std::cout << "-------------------------------------" << std::endl;

    animals[1] = new Cat();

    std::cout << "-------------------------------------" << std::endl;

    for (int k = 0; k < 2; k++)
        delete animals[k];

    std::cout << "-------------------------------------" << std::endl;

    return 0;
}
