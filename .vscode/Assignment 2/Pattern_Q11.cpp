#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i=0;i<=n;i++) {   //Row
        int k=1;
        for (int j=0;j<=i;j++) {    //Column
            cout<<k<<" ";
            k=k*(i-j)/(j+1);    //Pascal's Formula
        }
        cout<<endl;
    }
    return 0;
}