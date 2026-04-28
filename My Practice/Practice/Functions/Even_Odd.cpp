#include<iostream>
using namespace std;
int EvenOdd(int n){
    if (n%2==0) {
        cout<<"Even!"<<endl;
    } else {
        cout<<"Odd!"<<endl;
    }
}
int main() {
    EvenOdd(78);
    return 0;
}