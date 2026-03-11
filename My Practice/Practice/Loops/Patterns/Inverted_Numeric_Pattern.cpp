#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i=0;i<n;i++) {
        for(int j=0;j<i;j++) { //Space printing
            cout<<" ";
        }
        for (int j=0;j<n-i;j++) { //Number printing
            cout<<j+1;  //cout mai j+1 likhne par continuous number print ho jaayenge
        }
        cout<<endl;
    }
    return 0;
}