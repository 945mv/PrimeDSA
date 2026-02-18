#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int SumEven=0;
    int SumOdd=0;
    int p=1;
    while (n!=0) {
        int digit = n%10;
        if (p%2==0) {
            SumEven+=digit;
        } else {
            SumOdd+=digit;
        }
        n=n/10;
        p++;
        }
        cout<<"The value of Odd Sum digits: "<<SumEven<<endl;
        cout<<"The value of Even Sum digits: "<<SumOdd<<endl;
        return 0;
    }
