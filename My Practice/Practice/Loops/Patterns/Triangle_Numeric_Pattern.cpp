#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    //for continuous numbers printing int k=1; 
    for (int i=0;i<n;i++) {
      //for back to back printing int k=1;
        for (int j=1;j<=i+1;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}