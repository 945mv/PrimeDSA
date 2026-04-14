#include <iostream>
using namespace std;
int main() {  //TypeCasting
 //Conversion (Implicit) -->Small to big
 char Name='M'; //M kee ASCII value "77" hai
 int age=Name;
 cout<<Name<<endl;
 cout<<age<<endl;
 //Casting (Explicit) --> Big to small
 double salary=9000.89; //9000.89 mai . ke baad kuch bhi kyu naa likha woh point ke pahle kee value hee deta hai 
 int newSalary=(int)salary;
 cout<<newSalary<<endl;
 //Input kaise lete hai
 double weight;
 cout<<"Enter your weight : ";
 cin>>weight;
 cout<<"Your weight is: "<<weight<<endl;
    return 0;
}