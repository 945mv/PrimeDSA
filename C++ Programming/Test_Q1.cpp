#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int m=n-1;
    //space
     for (int i=0;i<=m;i++) {
        for (int j=1;j<=m-i;j++) {
            cout<<"  ";
        }
        //upper
        int k=i+1;
        for (int j=1;j<=2*i+1;j++) {
            cout<<k<<" ";
            if (j<=i) k++;
            else k--;
        }
        cout<<endl;
     }
     //space
     for (int i=m-1;i>=0;i--) {
        for (int j=1;j<=m-i;j++) {
            cout<<"  ";
        }
        //lower
        int k=i+1;
        for (int j=1;j<=2*i+1;j++) {
            cout<<k<<" ";
            if (j<=i) k++;
            else k--;
        }
        cout<<endl;
     }
     return 0;
}