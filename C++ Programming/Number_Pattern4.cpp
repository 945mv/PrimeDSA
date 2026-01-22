#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    //spaces
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n-i;j++) {
            cout<<"  ";
        } //right
        for (int j=i;j<=2*i-1;j++) {
            cout<<j<<" ";
        } for (int j=2*i-2;j>=i;j--) { 
            //left
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}