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
    cout<<"The factorial of N is: "<<factN(3)<<endl;   //argument
    cout<<"The factorial of N is: "<<factN(4)<<endl;
    cout<<"The factorial of N is: "<<factN(5)<<endl;
    return 0;
}