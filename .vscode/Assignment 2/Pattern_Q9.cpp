#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    //Left
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout<<j<<" ";
        }
    // Middle spaces
        for (int s=1;s<=2*(n-i)-1;s++) {
            cout<<"  ";
    }
    //Right
        for (int j=i;j>=1;j--) {
            if (i==n and j==i) continue;
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}