#include<iostream>
using namespace std;

int DectoBin (int decNum) {
       int ans=0;
       int pow=1;
       while (decNum>0) {
        int rem=decNum%2;
        decNum/=2;

        ans += (rem*pow);
        pow *= 10;
       }
       return ans;   //binary form
}
int main() {
    int n;
    cout<<"Enter the Decimal number: ";
    cin>>n;
    cout<<"Hence, the Binary number is "<<DectoBin(n)<<endl;
    return 0;
}