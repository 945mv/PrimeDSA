#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i=1;i<=n;i++) {   //outer loop
        for (int j=1;j<=n;j++) {  //inner loop
            cout<<j<<" ";  //print karwane ke liye
        }
        cout<<endl; //next line
    }
    return 0;
}