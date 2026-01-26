#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    cout << "\nTRACE:\n";
    cout << "i\tfact\n";

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
        cout << i << "\t" << fact << endl;
    }

    cout << "\nFactorial = " << fact;
    return 0;
}
