#include "easyfind.hpp"

int main( void ) {

	int	needle = 1337;
	std::vector< int > dynamic_arr(3, 42);
	dynamic_arr.push_back(1337);
	dynamic_arr.push_back(4);
	dynamic_arr.push_back(2);

	easyfind(dynamic_arr, needle);

	needle = 13377;
	try {
		easyfind(dynamic_arr, needle);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}