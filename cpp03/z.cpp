#include <iostream>

/**
 * @brief this is how the hierarchy going to look like:
 * 					A
 *				____|____
 *				|	|	|
 *				B	C	D
 *				|	|	|
 *				 ---|---
 *					X
 */				

using namespace std;

class A {
public:
	int a = 42;
	A() { cout << "Constructing A" << endl; }

	void Base_fun() { cout << "I am in class A" << endl; }
};

class B : public virtual A { // if not public -> int x will remain private withing class B
public:
	char b = 'b';
	B() { cout << "Constructing B" << endl; }

	void Derived_fun() { cout << "I am in class B" << endl; }
};

class C : public virtual A { // if not public -> int x will remain private withing class C
public:
	char c = 'c';
	C() { cout << "Constructing C" << endl; }

	void Derived_fun() { cout << "I am in class C" << endl; }
};

class D : public virtual A { // if not public -> int x will remain private withing class D
public:
	char d = 'd';
	D() { cout << "Constructing D" << endl; }

	void Derived_fun() { cout << "I am in class D" << endl; }
};

class X : public B, public C, public D
/**
	@brief
	if i dont use "public" all the public and protected members(char b, char c, char d) of B, C, and D will become private members of class X,
	then i will need to use the getters in this derived class inorder to get the member variable values.
**/
{
public:
	X() { cout << "Constructing X" << endl; }
/**
	 * @brief using will allow me to use D's Derived_fun() automaticly when; _xoxo.Derived_fun()
*/
	using D::Derived_fun;
};

int main()
{
	X _xoxo;

/**
	 * @brief printing the value of a (variable in the Base class).
*/
	cout << _xoxo.a << endl; // i can do this
	cout << _xoxo.A::a << endl; // and i also can do this

/**
	 * @brief printing the values of b, c, and d.
*/

	cout << _xoxo.b << endl;
	cout << _xoxo.c << endl;
	cout << _xoxo.d << endl;
	cout << "********************" << endl;

/**
	 * @brief this will cause Compile-time error (ambiguous)
	 * i need to specify which class method to use using ::B or ::C or ::D
			_xoxo.Derived_fun();
*/
	_xoxo.B::Derived_fun();
	_xoxo.Derived_fun(); // calling D's method

	cout << "********************" << endl;

/**
	 * @brief this will cause Compile-time error (‘void A::Base_fun()’ is protected within this context)
			_xoxo.Base_fun();
	 * i need to declare function as public or access the function via the X as a method.
*/
	_xoxo.Base_fun(); // calling Base_fun() from X
	_xoxo.B::Base_fun(); // calling Base_fun() from B
}