#include<iostream>
using namespace std;
int table(int n) {   //parameters
       for (int i=1;i<=10;i++) {
        cout<<n*i<<endl;
       }
}
int main() {
   table(5);  //argument
    return 0;
}