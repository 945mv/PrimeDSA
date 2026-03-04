#include<iostream>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;               // x is read after the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
