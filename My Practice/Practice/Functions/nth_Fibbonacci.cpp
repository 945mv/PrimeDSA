#include<iostream>
using namespace std;
int fibbonacci(int n) {
    int a=0,b=1,c;
    if (n==1) 
        return a;
    for (int i=2;i<=n;i++) {
        c=a+b;
        a=b;
        b=c;
    }
    return a;
 }
 int main() {
    int n;
    cout<<"Enter the Number of Fibbonacci: ";
    cin>>n;
    cout<<fibbonacci(n);
 }