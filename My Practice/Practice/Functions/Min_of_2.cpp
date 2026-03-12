#include<iostream>
using namespace std;
int minOfTwo(int a, int b) {  //parameters
    if (a<b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    cout<<"Minimum of Two is: "<<minOfTwo(5,2)<<endl;  //argument
    return 0;
}