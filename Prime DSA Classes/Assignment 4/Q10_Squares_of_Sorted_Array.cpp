#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of elements in an Array: ";
    //input lena
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    //har element ka square karna
    for (int i=0;i<n;i++) {
        arr[i]=arr[i]*arr[i];
    }
    //array ko sort karna
    sort(arr,arr+n);

    //print karane ke liye
    cout<<"Squares of Sorted Array is  ";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
