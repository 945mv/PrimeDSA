#include<iostream>
using namespace std;
//square
int square(int a) {  //parameters
    int s=a*a;
    return s;
}
//function call
int main() {
    cout<<"Square of 5: "<<square(5)<<endl;   //arguments

    cout<<"Square of 4 is: " <<square(4) <<endl ;  //arguments
    return 0;

}