#include<iostream>
using namespace std;
void ReverseArray(int arr[], int sz) {
     int start=0, end=sz-1;

     while (start<=end) {
        swap(arr[start],arr[end]) ;
        start++;
        end--;
     }
}
int main() {
    int sz;
    cout<<"Enter the size of Array: ";
    cin>>sz;
    int arr[sz];
    cout<<"Enter the number of elements in Array: ";
    for (int i=0;i<sz;i++) {
        cin>>arr[i];
    }
    cout<<"Reverse of an Array is ";
    ReverseArray(arr,sz) ;
    for (int i=0;i<sz;i++) {
        cout <<arr[i] << " ";
    }
       cout<<endl;
       return 0;
}