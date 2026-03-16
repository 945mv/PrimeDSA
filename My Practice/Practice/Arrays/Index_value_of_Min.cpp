#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int smallest=INT_MAX;
    int index=-1;
    for (int i=0;i<n;i++) {
        if (arr[i]<=smallest) {
            smallest=arr[i];
           index=i;
    }
}
cout<<"Smallest value is "<<smallest<<endl;
cout<<"Index value of Smallest is "<<index;
}
