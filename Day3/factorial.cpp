#include <iostream>
using namespace std;

// Clasic recursive function to calculate factorial
long long factorial(int n)
{

    if (n < 0)
    {
        cerr << "Error: Factorial is not defined for negative numbers." << endl;
        return -1; // Indicate an error
    }

    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    long long result = factorial(number);
    if (result != -1)
    { // Check for error
        cout << "Factorial of " << number << " is " << result << endl;
    }

    return 0;
}