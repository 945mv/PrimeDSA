#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    char ch='A';   //intialize the value of char before outer loop
    for (int i=0;i<n;i++){  //outer loop
        for (int j=0;j<n;j++) {  //inner loop
        cout<<ch<<" ";
        ch++;
        }
        cout<<endl;
    }
    return 0;
}