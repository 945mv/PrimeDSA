#include<iostream>
using namespace std;
int SumofDigits(int n) {  //parameters
    int digitSum=0;   //initialization

    while(n>0) {  //n jab tak bada hai tab tak chalane  ke liye
        int lastDigit=n%10;   //To seperate the digits
        n/=10;  //To use the digits
        digitSum+=lastDigit;  //for sum
    }
    return digitSum;  
}

int main() {
    cout<<"Sum of Digits = " << SumofDigits(73521)<<endl;  //arguments
    return 0;
}