#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	switch (time(NULL) % 3)
	{
		case 0 : return std::cout << "A Created !" << std::endl, new A();
		case 1 : return std::cout << "B Created !" << std::endl, new B();
		case 2 : return std::cout << "C Created !" << std::endl, new C();
	}
	std::cout << "Couldn't Generate !" << std::endl;
	return NULL ;
}

void	identify(Base	*p)
{
	if (dynamic_cast<A *>(p))		std::cout << "Pointer identification -> A" << std::endl;
	else if (dynamic_cast<B *>(p))	std::cout << "Pointer identification -> B" << std::endl;
	else if (dynamic_cast<C *>(p))	std::cout << "Pointer identification -> C" << std::endl;
}

void	identify(Base	&p)
{
    try {
        (void)dynamic_cast< A& >(p);
        std::cout << "Reference identification -> A" << std::endl;
    } catch(const std::exception& e) { }

    try {
        (void)dynamic_cast< B& >(p);
        std::cout << "Reference identification -> B" << std::endl;
    } catch( const std::exception& e ) { }

    try {
        (void)dynamic_cast< C& >(p);
        std::cout << "Reference identification -> C" << std::endl;
    } catch( const std::exception& e ) { }
}

int main()
{
	{
		Base	*ptr;

		ptr = generate();
		identify(ptr);
		identify(*ptr);

		delete ptr;
	}
	std::cout << std::endl;
	{
		Base	obj;

		identify(&obj);
		identify(obj);
	}
}