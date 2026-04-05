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
    for (int i=0;i<=10;i++) {
         cout<<"Hence, the Binary number is "<<DectoBin(i)<<endl;
    }
    return 0;
}