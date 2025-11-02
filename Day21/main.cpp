#include <iostream>

using namespace std;

// The following class demonstrates the use of 'this' pointer in C++

class A
{
private:
    int x, y;

public:
    int getX();
    void setX(int);

    int getY();
    void setY(int);
};

int A::getX()
{
    return x;
}
int A::getY()
{
    return y;
}

void A::setX(int x)
{
    this->x = x; // this Pointeri
}

void A::setY(int y)
{
    if (y > 5)
        this->y = y;
    else
        this->y = 2;
}

int main()
{
}
