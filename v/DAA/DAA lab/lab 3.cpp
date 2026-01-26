#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[50];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nTRACE (Bubble Sort Detailed Steps):\n";

    for (int pass = 1; pass < n; pass++) {
        cout << "\nPass " << pass << ":\n";

        for (int i = 0; i < n - pass; i++) {
            cout << "  Compare " << arr[i] << " and " << arr[i + 1];

            if (arr[i] > arr[i + 1]) {
                // swap
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                cout << " -> Swapped\n";
            } else {
                cout << " -> No swap\n";
            }

            // print array after each comparison
            cout << "   Array: ";
            for (int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }

    cout << "\nSorted Array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
