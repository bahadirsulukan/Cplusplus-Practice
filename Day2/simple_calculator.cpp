#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char op;

    cout << "Enter expression (e.g. 12.5 * 3): ";
    if (!(cin >> a >> op >> b))
    {
        cerr << "Input error.\n";
        return 1;
    }

    switch (op)
    {
    case '+':
        cout << (a + b) << "\n";
        break;
    case '-':
        cout << (a - b) << "\n";
        break;
    case '*':
        cout << (a * b) << "\n";
        break;
    case '/':
        if (b == 0)
        {
            cerr << "Error: division by zero!\n";
            return 1;
        }
        cout << (a / b) << "\n";
        break;
    default:
        cerr << "Unknown operator.\n";
        return 1;
    }
    return 0;
}