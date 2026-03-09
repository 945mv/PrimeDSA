#include<iostream>
using namespace std;
int main() {
    //Optimized way for prime and non prime
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    bool isPrime=true;
    for (int i=2;i*i<=n;i++) { //factor ka use karke
        if(n%i==0) {  //non prime ke liye
             isPrime=false;
             break;
        }
    }
    if (isPrime==true) {
        cout<<"Prime Number!"<<endl;
    }
    else {
        cout<<"Non-Prime Number!"<<endl;
    }
    return 0;
}