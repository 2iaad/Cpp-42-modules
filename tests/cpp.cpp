#include <cmath>
#include <iostream>


class C
{
	int a;
public:
	C();
	~C();
};

C::C()
{
	std::cout << "default constructure called" << std::endl;
}

C::~C()
{
	std::cout << "default DE called" << std::endl;
}
int main()
{
	C _1;
	int c = 0;

	c = 11;
	float x = std::roundf(11);

	// std::cout << x << std::endl;
}