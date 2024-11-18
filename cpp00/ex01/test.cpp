#include <cstdlib>
#include <iostream>
#include <sys/signal.h>

class employee {
	
	std::string name;
	std::string company;
	int			age;
public:

	employee(std::string Name, std::string Company, int Age) // this is the constructure we have created on our own
	{
		name = Name;
		company = Company;
		age = Age;
	}
	void	introduce_yourself()
	{
		std::cout << "hello my name is:" << name << std::endl;
		std::cout << "i work in:" << company << std::endl;
		std::cout << "i have:" << age << std::endl;
	}
	void SetName(std::string n) // this is the setter, how we update the value of a private variable inside the class
	{
		name = n;
	}
	std::string getName() // this is the getter, how we retrieve the value of a private variable inside the class
	{
		return name;
	}
};

/*
	class employee has

	---> 3 attributes:
	this 3 attributes are private implicitly(by default)

	---> 1 class method (behaviour / member funtion / function)
*/

int main()
{
	// employee _1; // we created an object called _1, _1 is considered an object of type employee
	// _1.name = "ziad";
	// _1.company = "FTMO";
	// _1.age = 23;
	// _1.introduce_yourself();

	// employee _2; // we created an object called _2, _2 is considered an object of type employee
	// _2.name = "walid";
	// _2.company = "FTMO";
	// _2.age = 23;
	// _2.introduce_yourself();

	/*
		there is a better way to construct our objects.
		if we have 10 employees we will need to repeat the same piece of code, which is not optimal.

		if you dont create a constructure on your own, the compiler will give you one called default constructure.
		if you create a constructure on your own, the default constructure that was automaticly generated gets deleted.
		as a result of this the old piece of long code wont be possible
	*/

	employee _1 = employee("ziat", "FTMO", 23); // this is called in the stack
	employee *_2 =  new employee("ziat", "FTMO", 23); // this is called in the heap
	// _1.introduce_yourself();
	std::cout << _2->getName() << std::endl;

	_2->SetName("ziad");
	_2->getName();

	std::cout << _2->getName() << std::endl;
	
	delete _2;

	// employee *_3 = (employee *)sizeof(int); // -----> its crazy how this is doable
	// employee _2 = employee("walid", "FTMO", 23);
	// _2.introduce_yourself();
}