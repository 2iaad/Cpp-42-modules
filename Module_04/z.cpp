#include <iostream>

using namespace std;

class Interface {
protected:
	int variable = 1337;
public:
	#define dick "zbi"
	Interface() { std::cout << "Interface Constructor called !" << std::endl;}
	~Interface() { std::cout << "Interface Destructor called !" << std::endl;}

	inline virtual int	f() = 0;
};

class Derived : public Interface {
private:
	int variable;
public:
	Derived() { std::cout << "Derived Constructor called !" << std::endl;}
	~Derived() { std::cout << "Derived Destructor called !" << std::endl;}

	inline int	f() {
						std::cout << "Definition of f() in Derived" << std::endl;
						std::cout << dick << std::endl;
						return this->variable;
					}
};

class _c {
public:
	#define x "zbi"
	_c() = default;
	~_c() = default;

	
};

int main()
{
	_c obj;

	std::cout << sizeof(obj) << std::endl;
}