#include <iostream>
using namespace std;

// Function to print array in border format
void printArray(int a[], int n) {
    cout << "+";
    for (int i = 0; i < n; i++) cout << "----+";
    cout << "\n|";
    for (int i = 0; i < n; i++) cout << " " << a[i] << " |";
    cout << "\n+";
    for (int i = 0; i < n; i++) cout << "----+";
    cout << endl;
}

int main() {
    int a[50], n, i, j, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "\nInitial Array:\n";
    printArray(a, n);

    // Bubble Sort with comparison tracing
    for (i = 0; i < n - 1; i++) {
        cout << "\n========== PASS " << i + 1 << " ==========\n";

        for (j = 0; j < n - i - 1; j++) {
            cout << "Compare a[" << j << "] = " << a[j]
                 << " and a[" << j + 1 << "] = " << a[j + 1];

            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                cout << " ? Swapped\n";
            } else {
                cout << " ? No Swap\n";
            }

            printArray(a, n);
        }
    }

    // Sorted array shown only once, after last pass
    cout << "\n? SORTED ARRAY (After Last Pass):\n";
    printArray(a, n);

    return 0;
}
