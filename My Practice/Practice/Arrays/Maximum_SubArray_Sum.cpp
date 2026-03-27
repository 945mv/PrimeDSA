#include<iostream>
#include<climits>
using namespace std;
//Brute Force se (Complexity is O(n^2))
int main() {
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values in an Array: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    //Maximum Subarray Sum
    int maxSum=INT_MIN;
    for (int start=0;start<n;start++) {
           int currSum=0;
        for (int end=start;end<n;end++) {
              currSum += arr[end];
        }
        maxSum = max(currSum,maxSum);
    }
    cout<<"Maximum SubArray Sum is : "<<maxSum;
    return 0;
}