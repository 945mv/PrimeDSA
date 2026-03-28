#include<iostream>
#include<climits>
using namespace std;
//Time Complexity --> O(n) (Linear) Most Optimized 
int main() {
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values in an Array: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    //Kadane's Algorithm
    int currSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++) {
        currSum += arr[i];
        maxSum = max (currSum,maxSum);
        if (currSum<0) {
            currSum=0;
        }
    }
    cout<<"Maximum SubArray is : "<<maxSum;
    return 0;
}