#include <iostream>
using namespace std;
int main() {
    int n;
    long long fact=1;
    cout<<"Enter the value of n: ";
    cin>>n;
for (int i=1;i<=n;i++) 
 fact=fact*i;
cout<<fact<<endl;
return 0;
}
