#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int i=1; //initialization
    do {  //yeh pahle kaam karta hai fir update karta hai
        cout<<i<<" ";
        i++;//updation
    }
    while (i<=n); //condition
    cout<<endl;
    return 0;
}