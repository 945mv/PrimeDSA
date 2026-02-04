#include <iostream>
using namespace std;
int main() {
int a,b,c;
cin>>a>>b>>c;
if (a>b and a>c)  {
    cout<<a<<" is greater"<<endl;
} if (b>c and b>a) {
    cout<<b<<" is greater"<<endl;
} if (c>a and c>b) {
    cout<<c<<" is greater"<<endl;
}
return 0;
}