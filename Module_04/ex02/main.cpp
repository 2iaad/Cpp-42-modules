#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

class A_class {
public:
	A_class() = default;
	virtual void f1() = 0;
};

void	A_class::f1()
{
	std::cout << "salam" << std::endl;
}

class Derived : public A_class {
	void f1();
};

void	Derived::f1()
{
	std::cout << "salam mn f1 derived!" << std::endl;
}

int main()
{
	Derived _Dobj;
	A_class *obj = &_Dobj;
	obj->f1();
}