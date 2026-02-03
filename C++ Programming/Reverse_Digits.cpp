#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    int rev=0;
    while (n!=0) {  //for negative sign (n>0) for positive sign
        int k=n%10;
        rev = rev*10+k;
        n/=10;
    }
    cout<<rev<<endl;
     return 0;
}