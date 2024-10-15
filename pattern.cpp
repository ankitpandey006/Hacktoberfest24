#include <iostream>
using namespace std;

int main() {
    int n;

    // Input: Number of rows for the pattern
    cout << "Enter the number of rows: ";
    cin >> n;

    // Pattern printing
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
