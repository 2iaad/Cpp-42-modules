#include <cmath>
#include <iostream>

using namespace std;

class A
{
	int x;
public:
	A() {	cout << "CO called !" << endl;	}; // DEFAULT CON

	A(int value) :  x(value) { cout << "PARA CO called !" << endl; }; // PARA CON

	~A() {}; // DES

	// A operator=(const A &OTHER) // COPY ASSI
	// {
	// 	cout << "COPY ASSI OPERA called !" << endl;
	// 	x = OTHER.x;
	// 	return *this;
	// }
};

class B : public A
{
public:
	// int x;

	B() {	cout << "CO called !" << endl;	}; // DEFAULT CON

	B(int value) :  A(value) { cout << "PARA CO called !" << endl; }; // PARA CON

	~B() {}; // DES

	// B operator=(const B &OTHER) // COPY ASSI
	// {
	// 	cout << "COPY ASSI OPERA called !" << endl;
	// 	x = OTHER.x;
	// 	return *this;
	// }
};


int main()
{
	A _1;
}