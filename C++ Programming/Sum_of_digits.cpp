#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    int sum=0;
    while (n!=0) {
        int k=n%10;
        sum=sum+k;
        n/=10;
    }
    cout<<abs(sum)<<endl;
    return 0;
}