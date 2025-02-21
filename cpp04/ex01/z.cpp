#include <iostream>

using namespace std;

class Base {
public:
	Base() { cout << "Constructing Base" << endl;}
	virtual ~Base() { cout << "Destructing Base" << endl;}
};

class tmp {
	std::string attri = "Gold";
public:
	tmp() { cout << "Constructing tmp" << endl;}
	virtual ~tmp() { cout << "Destructing tmp" << endl;}

	std::string	getAttri() const {
			return this->attri;
		}
};

class A : public Base {
public:
	tmp *_obj;

	A() {	cout << "Constructing A" << endl;
			_obj = new tmp();
		}

	~A() {	delete _obj;
			cout << "Destructing A" << endl;
		 }
};

int main()
{
	Base *B_obj = new A();

    std::cout << std::endl;

	cout << ((tmp *)B_obj)->getAttri() << endl;

    std::cout << std::endl;

	delete B_obj;
}