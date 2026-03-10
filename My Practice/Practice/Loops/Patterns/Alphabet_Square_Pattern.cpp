#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i=0;i<n;i++) {  //outer loop
        char ch='A';  //initalize the char value befor inner loop
        for (int j=0;j<n;j++) {  //inner start-->line start
            cout<<ch<<" ";  //
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}