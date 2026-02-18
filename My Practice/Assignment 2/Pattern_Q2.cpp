#include <iostream>
using namespace std;
int main() {
                              //      1 
                      //  2       3       2
              //  3       4       5       4       3 
      //  4       5       6       7       6       5       4
//5       6       7       8       9       8       7       6       5
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i=1;i<=n;i++) {
        //spaces
        for (int j=1;j<=n-i;j++) {
            cout<<" \t";
        }
        //right
        for (int j=i;j<=2*i-1;j++) {
            cout<<j<<" \t";
        }
        //left
        for (int j=2*i-2;j>=i;j--) {
            cout<<j<<" \t";
        }
        cout<<endl;
    }
    return 0;
}