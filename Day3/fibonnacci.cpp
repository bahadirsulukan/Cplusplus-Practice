#include <iostream>
using namespace std;

// Classic recursive function to calculate Fibonacci
long long fibonacci(int n)
{
    if (n < 0)
    {
        cerr << "Error: Fibonacci is not defined for negative numbers." << endl;
        return -1; // Indicate an error
    }

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    long long result = fibonacci(number);
    if (result != -1)
    { // Check for error
        cout << "Fibonacci of " << number << " is " << result << endl;
    }

    return 0;
}