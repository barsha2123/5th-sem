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
    int a[50], n, i, j, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "\nInitial Array:\n";
    printArray(a, n);

    // Insertion Sort with tracing
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        cout << "\n========== PASS " << i << " ==========\n";
        cout << "Key element = " << key << endl;

        while (j >= 0 && a[j] > key) {
            cout << "Compare " << a[j] << " > " << key
                 << " ? Shift " << a[j] << " to right\n";
            a[j + 1] = a[j];
            j--;

            printArray(a, n);
        }

        a[j + 1] = key;
        cout << "Insert key " << key << " at position " << j + 1 << endl;
        printArray(a, n);
    }

    // Sorted array shown only once, after last pass
    cout << "\n? SORTED ARRAY (After Last Pass):\n";
    printArray(a, n);

    return 0;
}
