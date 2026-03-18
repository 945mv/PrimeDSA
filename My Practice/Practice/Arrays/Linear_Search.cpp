#include<iostream>
using namespace std;
//Linear Search Time Complexity is O(n)
int linearSearch(int arr[],int sz, int target) {
    for (int i=0;i<=sz;i++) {
       if (arr[i]==target) {
        return i;  //FOUND
       }
    }
    return -1;  //NOT FOUND
}
int main() {
    int sz;
    cout<<"Enter the size of Array: ";
    cin>>sz;
    int arr[sz];
    //input
    for (int i=0;i<sz;i++) {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the targeted value: ";
    cin>>target;
    //output
   cout << "The Index of target is " << linearSearch(arr,sz,target) << endl;
    return 0;
}