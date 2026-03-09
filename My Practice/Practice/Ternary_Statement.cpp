#include <iostream>
using namespace std;
int main() {
    //Positive Negative
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<(n>=0? "Positive!":"Negative!")<<endl;
    //Voting Eligible
    int age;
    cout<<"Enter the Age: ";
    cin>>age;
    cout<<(age>=18? "Eligible!":"Not Eligible!")<<endl;
    //Even Odd
    int x;
    cout<<"Enter the Number: ";
    cin>>x;
    cout<<(x%2==0? "Even!":"Odd!")<<endl;
    return 0;
}