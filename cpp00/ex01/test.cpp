#include <cassert>
#include <iostream>

class _9ism
{
	int _var;
	public:
	int b;
	void f(int a); // 1 -> n9dr ndeclaari prototype hna omnb3d nimpliment lfunction
	int print() // 2 -> or i can just declare it inside the class
	{
		return _var;
	}
};

void	_9ism::f(int a)
{
	return (void)(_var  = a);
}


int main()
{
	// _9ism _CLASS;
	// _CLASS.f(1337);
	// // int x = _CLASS._var; this wont work m7it _var mdeclari as a private member automaticly 
	// std::cout << "l value deyal b hiya :" << _CLASS.print()	 << std::endl;

	std::string p;

	p = "hello world!";
	 std::cout << p;
}