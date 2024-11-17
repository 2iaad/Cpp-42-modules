#include <cstring>
#include <iostream>
#include <string>


namespace std
{
	int i;
	float	main(int x)
	{
		return x*x;
	} 
}

using namespace std;

int main(int ac, char **av)
{
	i = 17;
	cout << "jid3 morba3 deyal " << i << " howa " << main(std::i) << "\n";
	cin >> i ; // ghadi nreadi lvalude d i mn stdin
	cout << i; // nprinti lvalue d i
}