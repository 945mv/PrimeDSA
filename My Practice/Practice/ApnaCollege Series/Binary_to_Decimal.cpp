#include<iostream>
using namespace std;

int BintoDec(int BinNum) {
    int ans=0;
    int pow=1;
    
    while (BinNum>0) {
        int rem= BinNum%10;
        ans += rem*pow;

        BinNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter the Binary Number:  ";
    cin>>n;
    cout<<"Hence, the Decimal Number is "<<BintoDec(n)<<endl;
}