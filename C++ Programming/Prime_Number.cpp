#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    //flag or monitor = true/false 
    bool ans=true;
    for (int i=2;i<=sqrt(n);i++) {
        if (n%i==0) {
            ans=false;
            break;
        }
    }
    if (!ans) {
        cout<<"Prime nhi hai";
    }
    else {
        cout<<"Prime hai";
    }
    return 0;
}