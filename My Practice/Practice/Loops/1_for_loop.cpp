#include <iostream>
using namespace std;
int main() {
    //Sum of all Odd Numbers
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int oddSum=0;
    for (int i=1;i<=n;i++) {
        if (i%2!=0) {
         oddSum+=i;
        }
    }
    cout<<"Sum of odd is "<<oddSum<<endl;
    return 0;
}