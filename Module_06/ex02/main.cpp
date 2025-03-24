#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	switch (rand() % 3)
	{
		case 0 : return std::cout << "A Created !" << std::endl, new A();
		case 1 : return std::cout << "B Created !" << std::endl, new B();
		case 2 : return std::cout << "C Created !" << std::endl, new C();
		default :
			std::cout << "Couldn't Generate !" << std::endl;
			return NULL ;

	}
}

void	identify(Base	*p)
{
}

void	identify(Base	&p)
{
}

int main()
{
	Base	*ptr;

	ptr = generate();

	delete ptr;
}