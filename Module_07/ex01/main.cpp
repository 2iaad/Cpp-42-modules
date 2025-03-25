#include "iter.hpp"

#define NUMBERS	{0, 9, 11, 42, 1337}
#define COLORS	{	"Red", "Green", "Yellow", "Purple", \
					"Black", "Blue", "Ocean Blue" \
				}
#define length sizeof(arr)/ sizeof(arr[0])

int main( void ) {

	{
		short	int arr[]	= NUMBERS;
		
		iter(arr, length, &applier);
	}
	std::cout << "------" << std::endl;
	{
		std::string	arr[]	=	COLORS;

		iter(arr, length, &applier);
	}

	return 0;
}