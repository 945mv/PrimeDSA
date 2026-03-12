#include<iostream>
using namespace std;
bool Prime1toN(int n) { //parameters
    for (int i=2;i<n;i++) {
        if (n%i==0) {
            return false;
        } else {
            return true;
        }
    }
}
int main() {
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    for (int i=2;i<=n;i++) {
        if (Prime1toN(i))   //argument
        cout<<i<<" ";
    }
    return 0;
}