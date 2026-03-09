#include<iostream>
using namespace std;
int main() {
    //Sum of  all Even Numbers
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int evenSum=0;
    for (int i=0;i<=n;i++) {
        if(i%2==0) {
            evenSum+=i;
        }
    }
    cout<<"Sum of Even is "<<evenSum<<endl;
    return 0;
}
