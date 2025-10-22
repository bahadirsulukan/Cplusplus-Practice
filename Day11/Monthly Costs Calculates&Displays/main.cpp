#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    struct eigenschaften
    {
        int Grundgebühr;
        int InklusiveMinuten;
        double PreisjedeWeitereMinute;
    };

    eigenschaften Arr[]{
        {0, 0, 0.1},
        {5, 30, 0.1},
        {6, 50, 0.09},
        {10, 100, 0.08},
        {15, 200, 0.07}};

    cout << setw(15) << "Vertrag :" << setw(20) << "1" << setw(22) << "2" << setw(20) << "3" << setw(17) << "4" << setw(16) << "5" << endl;
    cout << setw(45) << "Ohne Bindung" << setw(15) << "Super 30" << setw(15) << "Super 50" << setw(16) << "Super 100" << setw(16) << "Super200" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Grundgebühr" << setw(28) << "0" << setw(15) << "5" << setw(14) << "6" << setw(14) << "10" << setw(16) << "15" << endl;
    cout << "Inklusive-Minuten" << setw(23) << "0" << setw(15) << "30" << setw(15) << "50" << setw(15) << "100" << setw(15) << "200" << endl;
    cout << "Preis jede weitere Minute" << setw(15) << "0.1" << setw(17) << "0.1" << setw(15) << "0.09" << setw(14) << "0.08" << setw(16) << "0.07" << endl;

    for (int i = 10; i <= 250; i += 10)
    {
        cout << "Monatliche Kosten bei " << setw(4) << i << "min";
        for (int j = 0; j < 5; j++)
        {
            if (i - Arr[j].InklusiveMinuten < 0)
                cout << setw(15) << setprecision(2) << fixed << Arr[j].Grundgebühr;

            else
                cout << setw(15) << setprecision(2) << fixed << Arr[j].Grundgebühr + ((i - Arr[j].InklusiveMinuten) * Arr[j].PreisjedeWeitereMinute);
        }
        cout << endl;
    }
}
