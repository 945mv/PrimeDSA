#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter the Character: ";
    cin>>ch;
    //By ASCII Code
    if (ch>=65 and ch<=90) {
        cout<<"Character "<<ch<<" is Uppercase!"<<endl;
        } 
        else {
        cout<<"Character "<<ch<<" is Lowercase!"<<endl;
    }
    //By Alphabets
    if (ch>='a' and ch<='z') {  //Implicit Conversion (ch-->int)
        cout<<"Character "<<ch<<" is Lowercase!"<<endl;  
    }
    else {
        cout<<"Character "<<ch<<" is Uppercase!"<<endl;
    }
    return 0;
}