#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// Fürs erste Menü : Wert eingeben
template <typename T> // T ist ein Platzhalter
void EingabeWerte(vector<T> &werte)
{
    T wert; // Wert vom Typ T deklariert
    cout << "Bitte Geben Sie einen Wert ein: " << endl;
    cin >> wert;
    werte.push_back(wert); // Werte immer zum Ende hinzufügen
    cout << "Die Werte sind sauber gespeichert! " << endl;
}

// Fürs zweite Menü : Werte ausgeben
template <class T>
void AusgabeWerte(vector<T> &werte)
{ // &wichtig, damit die Veränderung sich auf Original auswirkt
    cout << "Die gespeicherte Werten sind : ";
    for (auto w : werte)
    {
        cout << w << " ";
    }
    cout << endl;
}

// Fürs Werte suchen
template <class T>
bool WerteSuchen(const vector<T> &werte, const T &gesuchteWert)
{
    for (const T &w : werte)
    {
        if (w == gesuchteWert)
        {
            return true;
        }
    }
    return false;
}

// Für die Sortierung prüfen
template <typename T>
bool PruefeSortierung(vector<T> &werte)
{
    bool istSortiert = true;
    for (int i = 0; i < (int)werte.size(); ++i)
    {
        if (werte[i] > werte[i + 1])
        {
            istSortiert = false;
        }
    }
    return istSortiert;
}

int main()
{

    vector<int> intWerte;
    vector<float> floatWerte;
    vector<string> stringWerte;

    char auswahl;

    do
    {
        cout << "Aufgabe 15 - Werte benutzen" << endl;
        cout << "Bitte geben Sie eine option ein" << endl;
        cout << "1-) Werte eingeben" << endl;
        cout << "2-) Werte ausgeben" << endl;
        cout << "3-) Werte suchen" << endl;
        cout << "4-) Werte sortieren" << endl;
        cout << "x-) Programm beenden" << endl;
        cin >> auswahl;

        switch (auswahl)
        {
        case '1':
        {
            cout << "Welche Datentyp möchten Sie verwenden? (int, float, string)" << endl;
            string dataType; // Zunächst DataTyp auszuwählen
            cin >> dataType;
            if (dataType == "int")
            { // Wenn einegegebene Zahl "int" ist dazu benutzt man if Funktionen
                EingabeWerte(intWerte);
            }
            else if (dataType == "float")
            { // Wenn einegegebene Zahl "float" ist
                EingabeWerte(floatWerte);
            }
            else if (dataType == "string")
            { // Wenn einegegebene Zahl "string" ist
                EingabeWerte(stringWerte);
            }
            else
            {
                cout << "Das eingegebene Zahl ist ungültig. Bitte versuchen Sie erneut! " << endl;
            }
            break;
        }
        case '2':
        {
            cout << "Welche Datentyp möchten Sie ausgeben? (int, float, string)" << endl;
            string dataType;
            cin >> dataType;
            if (dataType == "int")
            { // Wenn einegegebene Zahl "int" ist dazu benutzt man if Funktionen
                AusgabeWerte(intWerte);
            }
            else if (dataType == "float")
            { // Wenn einegegebene Zahl "float" ist
                AusgabeWerte(floatWerte);
            }
            else if (dataType == "string")
            { // Wenn einegegebene Zahl "string" ist
                AusgabeWerte(stringWerte);
            }
            else
            {
                cout << "Das eingegebene Zahl ist ungültig. Bitte versuchen Sie erneut! " << endl;
            }
            break;
        }
        case '3':
        {
            cout << "Mit welcher Datentyp moechten Sie suchen? [int, float, string) " << endl;
            string dataType;
            cin >> dataType;
            if (dataType == "int")
            {
                int gesuchteWert;
                cout << "Bitte geben Sie einen Wert ein: ";
                cin >> gesuchteWert;
                if (WerteSuchen(intWerte, gesuchteWert))
                { /* Zwei Parametern "intWerte" und "gesuchteWert" überprüft ob das eingegebene Zahl drin ist oder nicht + wenn der gesuchte Wert drin ist*/
                    cout << "Der Wert wurde gefunden " << gesuchteWert << endl;
                }
                else
                {
                    cout << "Der Wert wurde nicht gefunden!" << endl;
                }
            }
            else if (dataType == "float")
            {
                float gesuchteWert;
                cout << "Bitte geben Sie einen Wert ein: ";
                cin >> gesuchteWert;
                if (WerteSuchen(floatWerte, gesuchteWert))
                { // Gleiche Regel mit zwei Parametern
                    cout << "Der Wert wurde gefunden! " << gesuchteWert << endl;
                }
                else
                {
                    cout << "Der Wert wurde nicht gefunden! " << endl;
                }
            }
            else if (dataType == "string")
            {
                string gesuchteWert;
                cout << "Bitte geben Sie einen Wert ein: ";
                cin >> gesuchteWert;
                if (WerteSuchen(stringWerte, gesuchteWert))
                { // Gleiche Regel mit zwei Parametern
                    cout << "Der Wert wurde gefunden! " << gesuchteWert << endl;
                }
                else
                {
                    cout << "Der Wert wurde nicht gefunden! " << endl;
                }
            }
            else
            {
                cout << "Es gab keine Datentyp, wie Sie geschrieben haben " << endl;
            }
            break;
        }

        case '4':
        {
            cout << "Mit welcher Datentyp moechten Sie überprüfen? [int, float, string) " << endl;
            string dataType;
            cin >> dataType;
            if (dataType == "int")
            {
                if (PruefeSortierung(intWerte))
                {
                    cout << "Die Werten sind sortiert " << endl;
                }
                else
                {
                    cout << "Die Werten sind nicht sortiert!" << endl;
                }
            }
            else if (dataType == "float")
            {
                if (PruefeSortierung(floatWerte))
                {
                    cout << "Die Werten sind sortiert" << endl;
                }
                else
                {
                    cout << "Die Werten sind nicht sortiert!" << endl;
                }
            }
            else if (dataType == "string")
            {
                if (PruefeSortierung(stringWerte))
                { // Gleiche Regel mit zwei Parametern
                    cout << "Der Wert wurde gefunden! " << endl;
                }
                else
                {
                    cout << "Die Werten sind nicht sortiert!" << endl;
                }
            }
            else
            {
                cout << "Es gab keine Datentyp, wie Sie geschrieben haben " << endl;
            }
            break;
        }
        case 'x':
        {
            cout << "Das Programm wird beendet! " << endl;
            break;
        }

        default:
        {
            cout << "Das Auswahl ist ungueltig! " << endl;
            break;
        }
        }
    } while (auswahl != 'x');
    return 0;
}
