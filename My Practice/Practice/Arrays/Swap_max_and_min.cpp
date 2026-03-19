#include<iostream>
#include<climits>
using namespace std;
int main() {

    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the number of Elements in Array: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int minIndex=0, maxIndex=0;

    for (int i=0;i<n;i++) {
        if (arr[i]<=arr[minIndex]) {
    
           minIndex=i;
    }
        if (arr[i]>=arr[maxIndex]) {  
            // = to use karo jab same element mai last ka index chahiye ho
            // only > use karo jab same element mai first index chaiye ho
        
            maxIndex=i;
        }
    }
    swap(arr[minIndex],arr[maxIndex]);

    cout<<"After swapping the Max and Min, the Array is ";
    
   for (int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
   }
    cout<<endl;
    return 0;
}