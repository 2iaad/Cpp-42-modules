#include "ex00/ScalarConverter.hpp"

#include <cstdlib>  // For std::strtod
#include <cerrno>

int main()
{
	errno = 0;
	double	result = 0;

	result = std::strtod("d", NULL);
	if (errno)
		std::cerr << "HERE!\n";
}
















	// try {
	// 	A* p1 = new A();
	// 	B* p2 = new B();
	// 	throw p1;
	// } catch (A *e) {
	// 	// std::cout << e << std::endl;
	// 	delete e;
	// }
	// std::cout << "Both object are destroyed!\n";

	// delete B;

	// std::set_terminate(my_terminate);
	// std::terminate();


// class Base {
// public:
// 	void fun()	{
// 					std::cout << "generating the segv" << std::endl;
					
// 					std::string arr[10];
// 					for (int i = 0; /* walouuu */ ; i++)
// 						arr[i] = "GRR";
// 				}
// 	~Base() { std::cout << "Destructor called!" << std::endl; }
// };

// std::string	to_try()		{
// 								throw "exception thrown";
// 								return "my exception called!";
// 							}

// int main()
// {
// 	try (to_try)
// 	{
// 		Base obj;

// 		obj.fun();
		
// 		throw std::set_new_handler(&my_exception);
// 	}
// 	// catch (ArrayIndexOutOfBoundsException e) {}
// 	// catch (int a) { std::cout << "catched an (int)\n"; }
// 	// catch (char const *str) { std::cout << "catched a (char *)\n"; }
// 	catch (...) {
// 					std::cout << "catched whatever data-type\n";
// 				}
// }
