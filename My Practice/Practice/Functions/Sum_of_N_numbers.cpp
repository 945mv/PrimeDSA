#include<iostream>
using namespace std;
//Sum of Numbers from 0 to N
int SumN(int n) { //parameters
    int sum=0;
    for (int i=1;i<=n;i++) {  //condition
        sum+=i; //updation
    }
    return sum;
}
int main() {
    cout<<"The Sum of N number is: "<<SumN(10)<<endl; //argument
    cout<<"The Sum of N number is: "<<SumN(20)<<endl;
    cout<<"The Sum of N number is: "<<SumN(30)<<endl;
    return 0;
}