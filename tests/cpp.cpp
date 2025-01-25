#include <cmath>
#include <iostream>

using namespace std;

class CLS
{
public:
	int a;

	CLS() {	cout << "CO called !" << endl;	}; // DEFAULT CON

	CLS(int value) :  a(value) { cout << "PARA CO called !" << endl; }; // PARA CON

	// CLS(const CLS &other) {
	// 	cout << "COPY CO called !" << endl;
	// 	a = other.a;
	// 	} // COPY CON

	~CLS() {}; // DES

	CLS operator=(const CLS &OTHER) // COPY ASSI
	{
		cout << "COPY ASSI OPERA called !" << endl;
		a = OTHER.a;
		return *this;
	}
};


int main()
{
	CLS _1(42);
	CLS _2;
	CLS _3;
	CLS _69;

	cout << endl;

	_69 = _3 = _2 = _1;

	cout << endl;

	cout << _1.a << endl;
	cout << _2.a << endl;
	cout << _3.a << endl;
	cout << _69.a << endl;
}