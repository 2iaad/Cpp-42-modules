#include <iostream>
#include <exception>
#include <cassert>

// using namespace ;



void createArray(int N) 
{ 
    try { 
        // int* array = new int[N]; 
  
        std::cout << "Array created successfully" << " of length " << N << " \n"; 
    }
  
    catch (std::bad_alloc& e) { 
  
        std::cout << e.what() << std::endl; 
    }
}
  
int main() 
{
    createArray(-1); 
    return 0; 
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
