#include <iostream>

//// Operator benutzen ////

using namespace std;

class A
{
private:
    int x;

public:
    int getX();
    void setX(int);
    friend ostream &operator<<(ostream &, A &); // in int main ohne getX Funktion nur z.B. "a" zuschreiben
};

int A::getX()
{
    return x;
}
void A::setX(int _x)
{
    x = _x;
}
ostream &operator<<(ostream &o, A &a)
{
    o << "im Class A x = " << a.x;
    return o;
}

int main()
{
    A a;
    a.setX(6);
    cout << a << endl;
}
