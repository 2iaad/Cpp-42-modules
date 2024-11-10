#include <cstring>
#include <iostream>
#include <string>


namespace deyali
{
	int i;
	float	main(int x)
	{
		return x*x;
	}
}

int main(int ac, char **av)
{
	deyali::i = 1337;
	std::cout << "jid3 morba3 deyal " << deyali::i << " howa " << deyali::main(deyali::i) << "\n";
	std::cout << deyali::i << std::endl;
}