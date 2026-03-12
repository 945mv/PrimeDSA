#include<iostream>
using namespace std;
//factorial of N
int factN(int n) { //parameters
    int fact=1;
    for (int i=1;i<=n;i++) {
        fact*=i;
    }
    return fact;
}
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"The factorial of N is: "<<factN(n)<<endl;   //argument
    return 0;
}