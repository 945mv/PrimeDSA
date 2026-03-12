#include<iostream>
using namespace std;

void checkPrime(int n)
{
    int count = 0;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }

    if(count==2)
        cout<<"Prime!";
    else
        cout<<"Non-Prime!";
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    checkPrime(n);
    return 0;
}