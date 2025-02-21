#include <iostream>
#include <stdio.h>

using namespace std;

class tmp {
	public:
		string tmp_string = "hi";
		tmp() { cout << "Constructing tmp" << endl;}
		~tmp() { cout << "Destructing tmp" << endl;}

};

class A {
public:
	int *a;
	tmp *_obj;

	A() {
			cout << "Constructing A" << endl;
			_obj = new tmp();
			// tmp name;
			// _obj = &name;;

			a = (int *) malloc (sizeof(int));
			*a = 1337;
		}

	A(const A &other) {
						cout << "Copy Constructing A" << endl;
						this->a = (int *) malloc (sizeof(int));
						this->_obj = new tmp();
						// tmp name;
						// _obj = &name;

						*(this->a) = *other.a; }

	~A() {
			cout << "Destructing A" << endl;
			free(a);
			delete _obj;
			}
};

/**
 * @brief Showing how the Deep copy is actually implemented using heap allocation. 
 * 
 * @return int 
 */

int main()
{
	A _1;
	A _2(_1);

	printf("%d|%p\n", *_1.a , _1.a);
	printf("%d|%p\n", *_2.a , _2.a);

	cout << "********************" << endl;

	printf("%p\n", _1._obj);
	printf("%p\n", _2._obj);

	cout << "********************" << endl;
}
