#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr1[n];
    cout<<"Enter the number of elements in an Array: ";
    for (int i=0;i<n;i++) {
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter the size of Array: ";
    cin>>m;
    int arr2[m];
    cout<<"Enter the number of elements in an Array: ";
    for (int i=0;i<m;i++) {
        cin>>arr2[i];
    }
    //Intersection of 2 Array
    for(int i=0;i<n;i++) {
         bool found = false;

        //check in array 2
        for(int j=0;j<m;j++) {
        if (arr1[i]==arr2[j]) {
           found=true;
           break;
           }
        }
         bool alreadyPrinted = false;

         //check in array 1
        for (int k=0; k<i;k++) {
            if (arr1[i]==arr1[k]) {
                alreadyPrinted=true;
            }
        }
        if (found && !alreadyPrinted) {
            cout<<arr1[i]<<" ";
        }
     }
 return 0;
}