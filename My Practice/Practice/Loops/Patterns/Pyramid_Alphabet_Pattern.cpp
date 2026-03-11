#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    char ch='A';
    for (int i=0;i<n;i++) {
        //spaces n-i-1
        for (int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        //nums1 i+1
        for (int j=1;j<=i+1;j++) {
            cout<<char(ch+j-1);
        }
        //nums2 
        for (int j=i;j>=1;j--) {
            cout<<char(ch+j-1);
        }
        cout<<endl;
    }
    return 0;
}