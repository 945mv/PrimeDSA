#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    //top part
    for (int i=0;i<n;i++) {
        //spaces (n-i-1)
        for (int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        //star
        cout<<"*";

        if (i!=0) {
        //spaces (2*i-1)
        for (int j=0;j<2*i-1;j++) {
                cout<<" ";
            }
        //star
        cout<<"*";

        }
        cout<<endl;
    }
    //bottom  part
    for (int i=0;i<n-1;i++) {
    //spaces i+1
        for (int j=0;j<i+1;j++) {
                cout<<" ";
            }
    //star
    cout<<"*";

    if (i!=n-2) {

        //spaces 2(n-i)-5
         for (int j=0;j<2*(n-i)-5;j++) {
                cout<<" ";
            }
        //star
        cout<<"*";

        }
    cout<<endl;

    }
    return 0;
}