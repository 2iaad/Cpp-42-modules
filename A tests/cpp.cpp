#include<iostream>
using namespace std;
class A {
private:
    int m_x = 42;
public:
    A()                { cout << "A::A() "; }
    A(int x) : m_x(x)  { cout << "A::A(" << x << ") "; }
    int getX() const   { return m_x; }
};

class B : public A {
public:
    B(int x):A(x)   { cout << "B::B(" << x << ") "; }
};

class C : public A {
public:
    C(int x):A(x) { cout << "C::C(" << x << ") "; }
};

class D : public C, public B  {
public:
    D(int x, int y): C(x), B(y)   {
        cout << "D::D(" << x << ", " << y << ") "; }
};

int main()  {
    cout << "Create b(2): " << endl;
    B b(2); cout << endl << endl;

    cout << "Create c(3): " << endl;
    C c(3); cout << endl << endl;

    cout << "Create d(2,3): " << endl;
    D d(2, 3); cout << endl << endl;

    // error: request for member 'getX' is ambiguous
    // cout << "d.getX() = " << d.getX() << endl;

    // error: 'A' is an ambiguous base of 'D'
    // cout << "d.A::getX() = " << d.A::getX() << endl;

    cout << "d.B::getX() = " << d.B::getX() << endl;
    cout << "d.C::getX() = " << d.C::getX() << endl;
}