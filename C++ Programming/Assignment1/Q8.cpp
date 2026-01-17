#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=0,i=0;
    if (i<=n) {
        sum=sum+i;
        i=i+1;
    } else {
        cout<<sum;
    }
    return 0;
    }
