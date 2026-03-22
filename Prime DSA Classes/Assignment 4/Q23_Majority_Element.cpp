#include<iostream>
#include<algorithm>
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
    //Majority Element
    sort(arr, arr+n);
     cout<<"Hence,Majority of Element is: "<<arr[n/2];
        return 0;
    }