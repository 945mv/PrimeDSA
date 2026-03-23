#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of elements in an Array: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int i=n-2;
    //Break point
    while (i>=0 && arr[i]>=arr[i+1]) {
    i--;
}
    if (i>=0){
        int j=n-1;

        //sort and greater element
        while (arr[j]<=arr[i]) {
            j--;
        }
        swap (arr[i],arr[j]);
    }
    //reverse
    reverse(arr+i+1,arr+n); 
    cout<<"The next permutation of "<<arr[i]<<" in lexicographical order is " ; 
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
