#include <iostream>
using namespace std;
int main() {
    // 1 
 // 2 3 2
//3 4 5 4 3
  //2 3 2
    //1
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    //Upper half  
    for (int i=0;i<=n/2;i++) {
        //spaces
        for (int j=0;j<(n/2-i);j++) {
            cout<<"  ";
        }
        
        //Increasing Numbers
        for (int j=i+1;j<=2*i+1;j++) {
            cout<<j<<" ";
        }
        //Decresing Part
        for (int j=2*i;j>=i+1;j--) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //Lower half 
    for (int i=(n/2-1);i>=0;i--) {
        //spaces
        for (int j=0;j<n/2-i;j++) {
            cout<<"  ";
        }
        //Increasing Part
        for (int j=i+1;j<=2*i+1;j++) {
            cout<<j<<" ";
        }
        //Decresing Part
        for (int j=2*i;j>=i+1;j--) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}