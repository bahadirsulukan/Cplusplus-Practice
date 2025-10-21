
#include <iostream>
#include <array>
#include <cmath>

using namespace std;

// Coordinate distance calculator

int main()
{
    int x1, x2, y1, y2;

    do
    {
        cout << "Geben Sie x/y-Korindaten ein." << endl;
        cout << "Bitte geben Sie zuerst (x1 y1)-Kordinaten ein." << endl;
        cin >> x1 >> y1;
        cout << "Bitte geben Sie jetzt (x2 y2)-Kordinaten ein." << endl;
        cin >> x2 >> y2;

        if (1 <= x1 && x1 <= 50 && 1 <= y1 && y1 <= 9)
        {
            cout << "Eingabe (x,y): (" << x1 << "," << y1 << ")" << endl;
        }
        else
        {
            cout << "Falsche Eingabe!" << endl;
            x1 = 0;
            y1 = 0;
        }

        if (1 <= x2 && x2 <= 50 && 1 <= y2 && y2 <= 9)
        {
            cout << "Eingabe (x,y): (" << x2 << "," << y2 << ")" << endl;
        }
        else
        {
            cout << "Falsche Eingabe!" << endl;
            x2 = 0;
            y2 = 0;
        }
    } while ((x1 == 0 || x2 == 0) || (y1 == 0 || y2 == 0));

    cout << endl;

    char A[10][51];

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 1; j < 51; ++j)
        {
            A[i][j] = ' ';
        }
    }

    A[y1][x1] = '*';
    A[y2][x2] = '*';
    cout << endl;

    for (int i = 9; 0 < i; i--)
    {
        cout << i << "|";

        for (int j = 1; j < 51; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }

    cout << "0|---------1---------2---------3---------4---------5" << endl;
    cout << " ";
    cout << endl;
    double abstand = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << "Abstand zwischen beiden Punkt ist : " << abstand << endl;

    return 0;
}
