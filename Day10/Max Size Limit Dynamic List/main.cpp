#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char auswahl;
    vector<int> zahlen; // anfängliche größe ist 5
    const int Max_Size_Liste = 4;
    int Wert;

    do
    {
        cout << "Taste Menü" << endl;
        cout << "i oder I Eingabe eines neuen Werts." << endl;
        cout << "g oder G Ausgabe der Anzahl der belegten Felder." << endl;
        cout << "o oder O Ausgabe aller belegten Felder." << endl;
        cout << "d oder D Lösch das erste Element." << endl;
        cout << "q oder Q Beendet das Programm." << endl;
        cout << "Wählen Sie eine Option : " << endl;
        cin >> auswahl;

        switch (auswahl)
        {
        case 'i':
        case 'I':
        {
            for (int i = 0; i <= Max_Size_Liste; ++i)
            {
                cout << "Bitte geben Sie " << i + 1 << ".Wert ein : " << endl;
                cin >> Wert;

                zahlen.push_back(Wert);

                if (i > Max_Size_Liste)
                {
                    cout << "Die Anzahl der Elemente in der Liste wurde überschritten. Das Programm wird beenden." << endl;
                    return 0;
                }
            }
            break;
        }
        case 'g':
        case 'G':
        {

            cout << "Die Anzahl aller belegten Felder : " << zahlen.size() << endl;

            break;
        }
        case 'o':
        case 'O':
        {
            for (auto a : zahlen)
            {

                cout << a << endl;
            }
            break;
        }
        case 'd':
        case 'D':
        {
            if (!zahlen.empty())
            {
                zahlen.erase(zahlen.begin());
            }
            else
            {
                cout << "Liste ist leer." << endl;
            }
            break;
        }
        case 'q':
        case 'Q':
        {
            cout << "Das Programm wird beendet." << endl;
            break;
        }
        default:
            cout << "Falsche Eingabe. Bitte versuchen Sie nochmal!\n ";
            break;
        }

    } while (auswahl != 'q' && auswahl != 'Q');

    return 0;
}
