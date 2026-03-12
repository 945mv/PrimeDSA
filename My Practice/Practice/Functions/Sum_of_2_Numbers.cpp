#include<iostream>
using namespace std;

//sum of 2 numbers
int sum(int a, int b) {
    int s=a+b;
    return s;
}
//function call / invoke
int main() {
    cout<<sum(93,101)<<endl;
    return 0;
}