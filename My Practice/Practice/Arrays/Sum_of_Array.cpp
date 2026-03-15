#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];  //input ke liye
    }
    int sum=0;
    for (int i=0;i<n;i++) {
        sum=sum+arr[i];
    }
    cout<<"Sum of Array is "<<sum<<" "<<endl;   //output ke liye
    cout<<"Size of the Array is "<<sizeof(arr)<<endl;  //array ka size pata karne ke liye
    return 0;
}