#include <iostream>

// The following code demonstrates the use of friend functions and friend classes in C++.

//// Friend Methode ////

using namespace std;

class B;

class A
{
private:
    int x;

public:
    int getX();
    //    void setX(int);
    friend void Funkt(A &); // Funkt Funktion ist mit Class A Freund geworden
    void setY(B &);
};

class B
{
private:
    int y;

public:
    int getY();
    //    void setY(int);
    friend class A; // Class B mit Class A ist ein Freund geworden, damit Class A auf die private Variable von Class B erreichen kann z.B. 'y'
};

int A::getX()
{
    return x;
}

// void A::setX(int _x)
//{
//     x = _x;
// }

void A::setY(B &y1)
{
    y1.y = 100;
}

void Funkt(A &x1)
{
    x1.x = 50;
}

int B::getY()
{
    return y;
}
// void B::setY(int _y)
//{
//     y =_y;
// }

int main()
{
    A o1;
    //    n1.setX(5);
    //    cout << n1.getX() << endl;

    B o2;
    //    n2.setY(6);
    //    cout << n2.getY() << endl;

    Funkt(o1);
    cout << o1.getX() << endl;

    o1.setY(o2);
    cout << o2.getY() << endl;

    return 0;
}
