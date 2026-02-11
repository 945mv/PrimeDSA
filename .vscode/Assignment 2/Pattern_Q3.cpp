#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    //Upper half  
    for (int i=0;i<=n/2;i++) {
        //spaces
        for (int j=0;j<(n/2-i);j++) {
            cout<<"  ";
        }
        //stars
        for (int j=0;j<2*i+1;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    //Lower half 
    for (int i=(n/2-1);i>=0;i--) {
        //spaces
        for (int j=0;j<n/2-i;j++) {
            cout<<"  ";
        }
        //stars
        for (int j=0;j<(2*i+1);j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}