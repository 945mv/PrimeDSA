#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in Array: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int largest=INT_MIN;
    int secondLargest = INT_MIN;

    for (int i=0;i<n;i++) {
        if(arr[i]>largest) {
            secondLargest=largest;
            largest=arr[i];

        }
        else if (arr[i]>secondLargest && arr[i]!=largest) {
            secondLargest=arr[i];
        }
    }
    cout<<"Largest value is "<<largest<<endl;
    cout<<"Second largest value is "<<secondLargest<<endl;
    return 0;
}