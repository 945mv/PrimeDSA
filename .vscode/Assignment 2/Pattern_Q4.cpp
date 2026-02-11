#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int m=1;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout<<m<<" \t";
            m++;
        }
        cout<<" \t"<<endl;
    }
    return 0;
}