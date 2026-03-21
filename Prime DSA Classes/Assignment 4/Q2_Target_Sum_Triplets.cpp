#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of Elements in an Array: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    } 
    int target;
    cout<<"Enter the targeted value: ";
    cin>>target;
    sort(arr, arr+n);
    cout<<"Hence, the Target Sum Triplets are: "<<endl;
    for (int i=0;i<n;i++) {
    int left=i+1, right=n-1;
    while(left<right) {
        int  sum=arr[i]+arr[left]+arr[right];
        if (sum==target) {
            cout<<arr[i]<<" "<<arr[left]<<" "<<arr[right]<<endl;
            left++;
            right--;
    }
       else if (sum<target) {
        left++;
       }
       else {
        right--;
       }
    }
  }
  return 0;
}