#include "Array.hpp"

int main( void ) {

	Array	< int >	obj1(10);

	for (unsigned int i(0); i < obj1.size(); i++) // fill arr
		obj1[i] = i;

	Array	< int >	obj2;
	obj2 = obj1; // copy assignement called.

	for (unsigned int i(0); i < obj2.size(); i++) // printing obj2 content.
		std::cout << obj2[i] << " ";
	
	std::cout << "\n\n----------" << std::endl;

	try {
		std::cout << "Dereferencing illegal block! " << obj2[10] << std::endl;
	} catch(const std::exception& e)  {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}

	return 0;
}