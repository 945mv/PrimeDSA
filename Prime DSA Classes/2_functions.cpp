#include <iostream>
using namespace std;
//No Argument No Return 
void greet() {
    cout<<"Hello"<<endl;
}
//Argument No Return 
void great (string name) {
    cout<<"Hello"<<name<<endl;
}
//No Argument Return
int subtract() {
    int a=5;
    int b=3;
    int c=a-b;
    return c;
} 
//Argument Return 
int add(int a,int b) {
    int c=a+b;
    return c;
}
int main() {
    greet();
    great("Mahak");
    //1st way
    int a=add(9,4);
    cout<<a<<endl;
    //2nd way
    cout<<add(9,4)<<endl;
    cout<<subtract()<<endl;
    return 0;
}