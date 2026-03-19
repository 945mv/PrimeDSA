#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
   int sum=0;
   int prod=1;
    for (int i=0;i<n;i++) {
        sum=arr[i]+sum;
        prod=arr[i]*prod;
    }
    cout<<"The sum of an Array is "<<sum<<endl;
    cout<<"The sum and product of an Array is "<<sum<< " and  " <<prod<<endl;
    cout<<"The product of Array is "<<prod<<endl;
    return 0;
}