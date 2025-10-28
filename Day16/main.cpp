#include <iostream>

using namespace std;

// The following code forms a simple C++ program that defines a class 'Punkt' to represent a point in 2D space.

class Punkt // Klasse erstellen
{

private:
    int x, y; // Objekten in Privaten Klassen

public:                          // Veröffentliche Eigenschaften Menge
    void Wertzuweisen(int, int); // eine Funktion erstellen, um Werte zuweisen zu können

    void Werteaufrufen(); // eine Funktion erstellen, die die Werte im Terminal anzeigt

    bool Kordinatenursprung(); // eine Funktion erstellen, die Kordinaten überprüft, ob die Werten am Kordinatenurpsrung steht.
};

void Punkt::Wertzuweisen(int _x, int _y) //  eine Funktion von Public die Werte rausnehmen,die die Werte zuweist, damit die Funktion nicht wie eine inline Funktion verhalten
{
    x = _x;
    y = _y;
}

void Punkt::Werteaufrufen() // eine Funktion von Public die Werte rausnehmen, die die Werte im Terminal anzeigt, damit die Funktion nicht wie eine inline Funktion verhalten
{
    cout << x << "," << y << endl;
}
bool Punkt::Kordinatenursprung() // eine Funktion von Public die Werte rausnehmen, die die Werte von Kordinaten überprüft, damit die Funktion nicht wie eine inline Funktion verhalten
{
    return x == 0 && y == 0;
}

// Referances kann man nicht danach verändern
// Pointer kann man danach verändern

int main()
{

    Punkt n1;  // Ein Objekt erstellen, das Eigenschaften von Punkt hat
    Punkt n2;  // Noch ein Objekt erstellen, das Eigenschaften von Punkt hat
    Punkt *n3; // mit einem Pointer eine Wert zuweisen
    Punkt *n4; // mit einem Pointer eine Wert zuweisen
    Punkt array[10];
    Punkt *pArray;
    pArray = new Punkt[10];

    for (int i = 0; i < 10; ++i)
    {
        array[i].Wertzuweisen(i, i + 2);
        pArray[i].Wertzuweisen(i + 5, i + 1); // = (pArray + sizeof(Punkt) * i)->Wertezuweisen(i+5, i+1)
    }

    for (int i = 0; i < 10; ++i)
    {
        array[i].Werteaufrufen();
        pArray[i].Werteaufrufen(); // = (pArray + sizeof(Punkt) * i)->Werteaufrufen()
    }

    n1.Wertzuweisen(2, 7); // eine Funktion aufrufen, welche wir in Public erstellt haben
    n1.Werteaufrufen();    // die Werte im Terminal anzeigen

    n2.Wertzuweisen(10, 5); // eine Funktion aufrufen, welche wir in Public erstellt haben
    n2.Werteaufrufen();     // die Werte im Terminal anzeigen

    n3 = &n2;         // mit einem Pointer neue erstellte Werte auf eine Wert zuweisen, die schon ohne Pointer eingegeben ist "n2"
    n4 = new Punkt(); // mit einem Pointer neue erstellte Werte einen freien Platz in Punkt erstellen

    n3->Werteaufrufen();      // die Werte im Terminal anzeigen
    n4->Wertzuweisen(13, 29); // eine Funktion aufrufen, mit der mann eine Werte zuweisen kann
    n4->Werteaufrufen();      // die Werte im Terminal anzeigen

    if (n1.Kordinatenursprung()) // Überprüfung, ob die Werten am Kordinatenursprung steht
        cout << "n1 steht am Kordiantenurprung." << endl;
    else
        cout << "n1 steht nicht am Kordiantenurprung." << endl;
    if (n2.Kordinatenursprung()) // Überprüfung, ob die Werten am Kordinatenursprung steht
        cout << "n2 steht am Kordiantenurprung." << endl;
    else
        cout << "n2 steht nicht am Kordiantenurprung." << endl;
}

// namespace Programmer1 {
// int x = 50;
// void Funktion ()
//{
//     int x = 78;
//     cout << x <<endl;
// }
// }

// namespace Programmer2 {
// int x = 42;
// void Funktion ()
//{
//     int x = 53;
//     cout << x <<endl;
// }
// }

// int main()
//{
//     int x = 8;
//     cout << x <<endl;

//    cout << Programmer1::x << endl;
//    cout << Programmer2::x << endl;
//    Programmer1::Funktion();
//    Programmer2::Funktion();

//    return 0;
//}
