#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        
        // Print leading spaces for alignment
        for (int j = 1; j <= (n - i); j++) {
            cout << "  "; 
        }

        // Print characters for the current row
        for (int k = 1; k <= (2 * i - 1); k++) {
            // Logic: Even positions in the current row segment get '!' 
            // BUT only if they are not on the top row.
            if (i > 1 && k % 2 == 0) {
                cout << "! ";
            } else {
                cout << "* ";
            }
        }

        cout << endl;
    }

    return 0;
}