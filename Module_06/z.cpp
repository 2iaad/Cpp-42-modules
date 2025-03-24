#include <iostream>

int main() {

	std::cout << sizeof(uintptr_t);
	
	return 0;
}


/**
 * @brief use of reinterpret_cast
 * 
 */

// int main() {

// 	const char *str = "hello world!";

// 	int	*ptr1 = (int *)&str;

// 	int	*ptr2 = reinterpret_cast< int* >(&str);
	
// 	return 0;
// }


// int main() {
//     double pi = 3.14159;

// /*	C-Style cast
// 		attemting to read pi adress with int(4 bytes) so we ignore the other 4 bytes,
// 		since double has 8 bytes of memory
// */
// 	int *ptr1 = (int *)&pi; 

// /*	C++ cast
// 		This will cause a compile-time error
// */
//     int	*ptr2 = reinterpret_cast<int*>(&pi);  // ❌ Compilation error!

//     return 0;
// }







	// errno = 0;
	// double	result = 0;

	// result = std::strtod("d", NULL);
	// if (errno)
	// 	std::cerr << "HERE!\n";



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
