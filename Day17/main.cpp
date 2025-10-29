#include <iostream>

using namespace std;
class Punkt
{
private:
    int x, y;

public:
    int getX();
    int getY();

    void setX(int);
    void setY(int);

    void Werteaufrufen();
};

void Punkt::Werteaufrufen() // eine Funktion von Public rausnehmen, die die Werte im Terminal anzeigt, damit die Funktion nicht wie eine inline Funktion verhalten
{
    cout << x << "," << y << endl;
}

int Punkt::getX() // Eine Funktion erstellen, die  die Variablen von Private einnimmt
{
    return x;
}
int Punkt::getY() // Eine Funktion erstellen, die  die Variablen von Private einnimmt
{
    return y;
}

void Punkt::setX(int _x) // Eine Funktion erstellen, die  die von Private eingenommene Variablen zuweist
{
    x = _x;
}
void Punkt::setY(int _y) // Eine Funktion erstellen, die  die von Private eingenommene Variablen zuweist
{
    if (_y > 5)
        y = _y;
    else
        y = 2;
}

int main()
{
    Punkt n1; // Ein Objekt erstellen, dessen Variablen in Private stehen

    n1.setX(10); // von Private die Werte aufzurufen
    n1.setY(4);  // von Private die Werte aufzurufen

    cout << n1.getX() << " " << n1.getY() << endl; // die Werte von der in Private stehende Variablen im Terminal anzuzeigen

    n1.Werteaufrufen(); // die Werte von der in Private stehende Variablen im Terminal anzuzeigen
    return 0;
}
