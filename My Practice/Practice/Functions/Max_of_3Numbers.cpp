#include<iostream>
using namespace std;

//maximum of 3 numbers
int maxNumber(int a,int b,int c)  //parameters
{
    int max=a;

    if(b>max)
        max=b;

    if(c>max)
        max=c;

    return max;
}
int main() {
    int a,b,c;
    cout<<"Enter the 3 numbers:  ";
    cin>>a>>b>>c;
    cout<<"Maximum of 3 Number is: "<<maxNumber(a,b,c)<<endl ;  //arguments
    return 0;
}