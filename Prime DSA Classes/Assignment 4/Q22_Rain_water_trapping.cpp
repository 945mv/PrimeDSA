#include<iostream>
using namespace std;
int main() {
    int t;
    cout<<"Enter the number of Test Cases: ";
    cin>>t;
    while (t--) {
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int left = 0, right = n-1;
    int leftmax=0, rightmax=0;
    int water =0;
    while (left<right) {
        if (arr[left]<arr[right]) {
            if (arr[left]>=leftmax) {
                leftmax=arr[left];
            }
            else {
                water += leftmax - arr[left];         
              }
               left++; 
        }
        else {
if (arr[right]>=rightmax) {
    rightmax=arr[right];
}
else {
    water += rightmax-arr[right];
}
 right--;
            }
             }
              cout<<water<<" "; 
    }
 return 0;
}