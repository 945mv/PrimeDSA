#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i=1;i<=n;i++) {
        //spaces
        for (int j=1;j<=n-i;j++) {
            cout<<" ";
        }
        //stars
        for (int j=1;j<=n;j++) {
            //spaces
        if (i==1 or i==n || j==1 or j==n) {
            cout<<"*";
        }
        else {
            cout<<" ";
        }
    }
    cout<<endl;
   } 
   return 0;
}