#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of Elements in Array: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    //unique value in array
    cout<<"The Unique values in an Array is ";
    for (int i=0;i<n;i++) {
        int unique=0;
        for (int j=0;j<n;j++) {
            if (arr[i]==arr[j]) {
                unique++;
            }
         }
         
         if (unique==1) {
            cout<<arr[i]<<" ";
            }
        }
 return 0;
    }
