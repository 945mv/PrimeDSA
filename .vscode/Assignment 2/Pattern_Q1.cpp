#include <iostream>
using namespace std;
int main() {
   // * * * * * 
   // * *   * *
//    *       *
//    * *   * *
//    * * * * *
    int n; 
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i = 1; i <= (n / 2 + 1); i++) {
        // Left stars
        for (int j = 1; j <= (n / 2 + 2 - i); j++) {
            cout << "* ";
        }
        // Spaces
        for (int j = 1; j <= (2 * i - 3); j++) {
            cout << "  ";
        }
        // Right stars
        for (int j = 1; j <= (n / 2 + 2 - i); j++) {
            if (i == 1 && j == 1) continue; 
            cout << "* ";
        }
        cout << endl;
    }

    // 2. BOTTOM HALF
    for (int i = 1; i <= n / 2; i++) {
        // Left stars
        for (int j = 1; j <= i + 1; j++) {
            cout << "* ";
        }
        // Spaces
        for (int j = 1; j <= (n - 2 * i - 2); j++) {
            cout << "  ";
        }
        // Right stars
        for (int j = 1; j <= i + 1; j++) {
            if (i == n / 2 && j == 1) continue; 
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}