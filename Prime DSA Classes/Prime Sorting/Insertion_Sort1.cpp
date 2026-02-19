#include <iostream>
using namespace std;

int main() {
    cout<<"ENTER THE NUMBER OF ELEMENTS: ";
    int n;
    cin >> n;
    cout<<"ENTER THE ELEMENTS: ";
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
   cout<<"SORTED ARRAY THROUGH INSERTION SORT: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}