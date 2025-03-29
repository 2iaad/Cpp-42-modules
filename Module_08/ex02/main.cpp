#include "MutantStack.hpp"

int main( void ) {

	MutantStack < int > obj;

	obj.push(13);
	obj.push(0);
	obj.push(3);
	
	std::cout << obj.size() << std::endl;
	
	std::deque < int >::const_iterator it1 = obj.begin();
	std::deque < int >::const_iterator it2 = obj.end();
	
	while (it1 != it2)
	{
        std::cout << *it1 << " ";
		it1++;
    }
	return 0;
}
