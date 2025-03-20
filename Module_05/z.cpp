#include <iostream>
#include <exception>
#include <cassert>


/*
virtual const char*		what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
*/


class Base {
public:
	virtual void f() { std::cout << "in Base!" << std::endl; }
};

class Derived : public Base {
private:
public:
	void	f() { std::cout << "f But in the derived!" << std::endl; }
	void	f2() { std::cout << "in Derived!" << std::endl; }
};

#include <stdio.h>

int main()
{
	
}









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
