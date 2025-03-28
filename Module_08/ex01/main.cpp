#include "Span.hpp"

int main( void ) {

	Span	obj(10);
	obj.addNumber(7);
	obj.addNumber(-2);
	obj.addNumber(15);
	obj.addNumber(-15);
	obj.addNumber(10);

	try {
		obj.addNumber(1337);
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\tLongest span is:	" << obj.longestSpan() << std::endl;
	std::cout << "\tShortest span is:	" << obj.shortestSpan() << std::endl;

	std::vector < int >	other(3, 777);

	std::cout << "Before:	";	obj.getStorage();
	try {
		obj.addNumber(other.begin(), other.end());
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "After:	";	obj.getStorage();

	return 0;
}
