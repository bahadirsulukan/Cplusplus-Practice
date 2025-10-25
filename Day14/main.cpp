#include <string>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// The following Programm is about Inheritance in C++

class Lebensmittel
{ // Basis Klasse ist "Lebensmittel"
public:
    Lebensmittel(const string name_) : name(name_)
    {
        cout << "Konstruktor Lebensmittel" << endl;
    }
    ~Lebensmittel() { cout << "Destruktor Lebensmittel" << endl; }
    virtual void zubereiten()
    {
        cout << name << "zubereiten" << endl;
    }

protected:
    string name;
};

class Fleisch : public Lebensmittel
{
public:
    Fleisch(const string name_) : Lebensmittel(name_)
    {
        cout << "Konstruktor Fleisch" << endl;
    }
    ~Fleisch() { cout << "Destruktor Fleisch" << endl; }
    void zubereiten()
    {
        cout << name << "anbraten" << endl;
    }
};

class Obst : public Lebensmittel
{
public:
    Obst(const string name_) : Lebensmittel(name_)
    {
        cout << "Konstruktor Obst" << endl;
    }
    ~Obst() { cout << "Destruktor Obst" << endl; }
    void zubereiten()
    {
        cout << name << "schälen" << endl;
    }
};
class Gemuese : public Lebensmittel
{
public:
    Gemuese(const string name_) : Lebensmittel(name_)
    {
        cout << "Konstruktor Gemüse" << endl;
    }
    ~Gemuese() { cout << "Destruktor Gemüse" << endl; }
    void zubereiten()
    {
        cout << name << "putzen" << endl;
    }
};

int main()
{
    Lebensmittel mittagsessen("Mittagsessen");
    Fleisch steak("Steak");
    Obst banane("Banane");
    Obst hinbeere("Hinbeere");
    Gemuese chili("Chili");

    cout << endl
         << "----------------- Vor Essen zubereiten -------------------" << endl;
    mittagsessen.zubereiten();
    banane.zubereiten();
    hinbeere.zubereiten();
    chili.zubereiten();
    steak.zubereiten();

    cout << endl
         << "---------------- Nach Essen zubereiten --------------------" << endl;

    steak.Lebensmittel::zubereiten();

    Lebensmittel *lebensmittel[] = {&banane, &hinbeere, &chili, &steak};

    for (auto p : lebensmittel)
        p->zubereiten();
}

// private:
//     string name;

// public:
//     Lebensmittel(const string& n): name(n) { // name ist initialisiert zu n
//         cout << "Komstruktor Lebensmittel : " << name << endl; // "name" ist im Konstruktor übergegeben
//     }
//     ~Lebensmittel() { // Für Destruktor benutzen wir ~
//         cout << "Destruktor Lebensmittel : " << name << endl;
//     }
//     void zubereiten() { // eine andere Eigenschaften hinzuzufügen benutzen wir void Funktion
//         cout << name << " zubereiten " << endl;
//     }
// };

// class Fleisch : public Lebensmittel { // wir machen eine andere Classe basiert auf unserer Bais Klasse

// public:
//     Fleisch(const string &n) : Lebensmittel(n) {
//         cout << "Konstruktor Fleisch : " << n << endl;
//     }
//     ~Fleisch() { // Für Destruktor benutzen wir ~
//         cout << "Destruktor Fleisch : " << endl;
//     }
//     void zubereiten() { // eine andere Eigenschaften hinzuzufügen benutzen wir void Funktio
//         cout << " anbraten " << endl;
//     }
// };

// class Obst : public Lebensmittel { // wir machen eine andere Classe basiert auf unserer Bais Klasse

// public:
//     Obst(const string &n) : Lebensmittel(n) {
//         cout << "Konstruktor Obst : " << n << endl;
//     }
//     ~Obst() { // Für Destruktor benutzen wir ~
//         cout << "Destruktor Obst: " << endl;
//     }
//     void zubereiten() { // eine andere Eigenschaften hinzuzufügen benutzen wir void Funktio
//         cout << " schaelen " << endl;
//     }
// };

// class Gemuese : public Lebensmittel { // wir machen eine andere Classe basiert auf unserer Bais Klasse

// public:
//     Gemuese(const string &n) : Lebensmittel(n) {
//         cout << "Konstruktor Gemuese : " << n << endl;
//     }
//     ~Gemuese() { // Für Destruktor benutzen wir ~
//         cout << "Destruktor Gemuese: " << endl;
//     }
//     void zubereiten() { // eine andere Eigenschaften hinzuzufügen benutzen wir void Funktio
//         cout << " putzen " << endl;
//     }
// };

// int main() { // Fünf Objekten wurden erstellt
//     Lebensmittel mittagessen("Mittagessen");
//     Fleisch steak("Steak");
//     Obst apfel("Apfel");
//     Obst banane("Banane");
//     Gemuese paprika("Paprika");

//    cout << endl << "VOR ESSEN ZUBEREITEN" << endl;
//    mittagessen.zubereiten();
//    steak.zubereiten();
//    apfel.zubereiten();
//    banane.zubereiten();
//    paprika.zubereiten();

//    cout << endl << "NACH ESSEN ZUBEREITEN" << endl;

//    steak.Lebensmittel::zubereiten();
//}
