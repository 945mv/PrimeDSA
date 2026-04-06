#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the Array: ";
    for (int i=0;i<n;i++) {
         cin>>arr[i];
    }
        for (int i=0;i<n;i++) {
            cout<<arr[i]<<" is power of 2:- "<<endl;
            if((arr[i]&(arr[i]-1))==0) {
                cout<<"True"<<endl;
            }
            else {
                cout<<"False"<<endl;
            }
        }
            return 0;
}