#include<iostream>
using namespace std;
int main() {
    //Arithematic Operator--> "+,-,*,/,%"
    int a=9,b=3;
    cout<<"Arithematic Operators:-"<<endl;
    cout<<"Sum="<<(a+b)<<endl;
    cout<<"Difference="<<(a-b)<<endl;
    cout<<"Product="<<(a*b)<<endl;
    cout<<"Division="<<(a/b)<<endl;
    cout<<"Modulo="<<(a%b)<<endl<<endl;
    //Relational Operator--> "<,>,<=,>=,==,!=" yeah boolean hote hai
    cout<<"Relational Operators:-"<<endl;
    cout<<"Greater than="<<(5>3)<<endl; //true-->1
    cout<<"Lesser than="<<(5<3)<<endl; //false-->0
    cout<<"Greater than Equal to="<<(5<=3)<<endl; //false-->0
    cout<<"Lesser than Equal to="<<(5>=3)<<endl; //true-->1
    cout<<"Equal to Equal to="<<(5==3)<<endl; //false-->0 
    //yaha do baar equal isliye use hota hai kyoki sigle equal toh as a Assignment operator use ho chuka hai
    cout<<"NOT equal to="<<(5!=3)<<endl<<endl; //true-->1
    //Logical Operator--> "AND(&&),OR(||),NOT(!)"
    cout<<"Logical Operators:-"<<endl;
    cout<<"NOT Operator="<<!(5<=9)<<endl; //false-->0 NOT condition reverse kar deta hai
    cout<<"OR Opreator="<<((5>=3)||(5<=5))<<endl;// true-->1 Ek bhi condition true hogi toh yeah true de dega
    cout<<"AND Operator="<<((5<=3)&&(9<=5))<<endl<<endl; //false-->0 Agar ek bhi false hui toh yeah false de dega just opposite of OR Operator
    //Unary Operators-->"Increament(++) and Decreament(--)"
    cout<<"Unary Operator:-"<<endl;
    int m=10;
    int n=m++; //"POST INCREAMENT" Yeah pahle kaam karega fir update karta hai
    cout<<"n="<<n<<endl;
    cout<<"m="<<m<<endl;
    int k=9;
    int l=k--; //"POST DECREMENT" Yeah bhi pahle kaam karta hai then update
    cout<<"l="<<l<<endl;
    cout<<"k="<<k<<endl;
    int c=13;
    int d=++c; //"PRE INCREMENT" Yeah pahle update kar dega fir kaam karega 
    cout<<"d="<<d<<endl;
    cout<<"c="<<c<<endl;
    int e=21;
    int f=--e; //"PRE DECREMENT" yeah bhi update kar dega fir kaam karega
    cout<<"f="<<f<<endl;
    cout<<"e="<<e<<endl;
    return 0;
}