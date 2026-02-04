#include <iostream>
#include <iomanip>
using namespace std;

int call = 0;

int fibonacci(int n)
{
    int currentCall = ++call;

    // Print function call
    cout << "| " << setw(7) << currentCall
         << " | " << setw(15) << ("fibonacci(" + to_string(n) + ")")
         << " | " << setw(12) << "----" << " |\n";

    if (n <= 1)
    {
        // Print return value
        cout << "| " << setw(7) << currentCall
             << " | " << setw(15) << ("fibonacci(" + to_string(n) + ")")
             << " | " << setw(12) << n << " |\n";
        return n;
    }

    int result = fibonacci(n - 1) + fibonacci(n - 2);

    // Print return value
    cout << "| " << setw(7) << currentCall
         << " | " << setw(15) << ("fibonacci(" + to_string(n) + ")")
         << " | " << setw(12) << result << " |\n";

    return result;
}

int main()
{
    int n;
    cout << "--- Fibonacci Using Recursive Method (ASCII Table) ---\n";
    cout << "Enter nth term: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input\n";
        return 0;
    }

    cout << "\n---------------------------------------------\n";
    cout << "| Call No | Function Call | Return Value |\n";
    cout << "---------------------------------------------\n";

    int result = fibonacci(n);

    cout << "---------------------------------------------\n";
    cout << "\nFibonacci(" << n << ") = " << result << endl;

    return 0;
}
