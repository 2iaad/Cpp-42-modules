#include <iostream>

using namespace std;

class A {
public:
	int a = 42;
	A() { cout << "Constructing A" << endl; }

protected:
	void Base_fun() { cout << "I am in class A" << endl; }
};

class B : public virtual A { // if not public -> int x will remain private withing class B
public:
	char b = 'b';
	B() { cout << "Constructing B" << endl; }

protected:
	void Derived_fun() { cout << "I am in class B" << endl; }
};

class C : public virtual A { // if not public -> int x will remain private withing class C
public:
	char c = 'c';
	C() { cout << "Constructing C" << endl; }

protected:
	void Derived_fun() { cout << "I am in class C" << endl; }
};

class D : public virtual A { // if not public -> int x will remain private withing class D
public:
	char d = 'd';
	D() { cout << "Constructing D" << endl; }

protected:
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
};

int main()
{
	X _xoxo;

	/**
	 * @brief printing the value of a (variable in the Base class).
	 * 
	 */
	cout << _xoxo.a << endl; // i can do this
	cout << _xoxo.A::a << endl; // and i also can do this

	/**
	 * @brief printing the values of b, c, and d.
	 * 
	 */

	cout << _xoxo.b << endl;
	cout << _xoxo.c << endl;
	cout << _xoxo.d << endl;
	cout << "********************" << endl;

	_xoxo.Derived_fun();
}