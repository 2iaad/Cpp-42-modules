#include <iostream>

using namespace std;

class Interface {
public:
	Interface() { std::cout << "Interface Constructor called !" << std::endl;}
	~Interface() { std::cout << "Interface Destructor called !" << std::endl;}

	virtual void	f() = 0;
};

class Derived : public Interface {
private:
	void (*Derived::ptr)(void);
public:
	void	f() { std::cout << "Im f() in Derived" << std::endl; }
	void	set_ptr() { this->ptr = f; }
	void	get_ptr() { printf("%p", *ptr); }
};

class Derived_2 : public Derived {
public:
	// void	f() { std::cout << "Im f() in Derived_2" << std::endl; }
};

#include <stdio.h>

int main()
{
	Derived_2 obj_1;

	obj_1.set_ptr();
	obj_1.get_ptr();
}