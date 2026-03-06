#include <iostream>
using namespace std;
int main() {
    int age=21;
    char name='M'; //ASCII value use hoti hai character ke liye
    float PI=3.14f; //f use karne se woh samjh jata hai kee yeah ek decimal value hai or Constant value ko as a Professinal manner mai capital letter mai likhna chahiye
    bool isSafe=true; 
    double price=100.99;
    cout<<age<<endl; //int--> 4 byte ka hota hai
    cout<<name<<endl; //char--> 1 byte ka hota hai
    cout<<PI<<endl;  //float--> 4 byte ka hota hai
    cout<<isSafe<<endl; //true-->1 and false-->0  bool--> 1 byte ka hota hai
    cout<<price<<endl; //double--> 8 byte ka hota hai
    // This all are Primitive Data Types jo ke basic data type hote hai
    return 0;
}