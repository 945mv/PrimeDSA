#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of elements in an Array: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    //Running Sum of an Array
    int sum=0;
    for (int i=0;i<n;i++) {
        sum = sum+arr[i];
        cout<<sum<<" ";
    }
    return 0;
}