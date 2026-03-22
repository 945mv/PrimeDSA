#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of elements in an Array: ";
    int sum=0;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
        sum = sum+arr[i];
    }
    int q;
    cout<<"Enter the number of Operation: ";
    cin>>q;

    int arr2[n];
    cout<<"Enter the number of elements in an Array: ";
    for (int i=0;i<q;i++) {
        cin>>arr[i];
    }
    //power calculate karne ke liye
    int power = 1;
    for (int i=0;i<q;i++) {
        power = power*2;
    }
    int ans=sum*power;
    cout<<"Hence, the correct answer would eqaul to  "<<ans;
    return 0;
}