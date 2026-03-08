#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of element: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the number of Element: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int start = 0;
    int end = n - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<<"Reverse of Elements: ";
    for(int i = 0; i < n; i++) {
        cout <<arr[i] <<" ";
    }
    return 0;
}