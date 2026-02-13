#include <iostream>
using namespace std;
int main() {
 //0 
//1 1
//2 3 5
//8 13 21 34
//55 89 144 233 377 
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int a=0,b=1,c;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout<<a<<" ";
            c=a+b;
            a=b;
            b=c;
        }
        cout<<endl;
    } 
    return 0;
}