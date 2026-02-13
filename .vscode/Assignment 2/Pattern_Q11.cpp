#include <iostream>
using namespace std;
int main() {                                                              
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1
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