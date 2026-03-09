#include <iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter the Marks: ";
    cin>>marks;
    if(marks>=90) {
        cout<<"Outstanding(A)"<<endl;
    } else if(marks>=80 and marks<90)  {
        cout<<"Excellent(B)"<<endl;
    } else if(marks>=70 and marks<80) {
        cout<<"Very Good(C)"<<endl;
    }else if (marks>=60 and marks<70) {
        cout<<"Good(D)"<<endl;
    } else  {
        cout<<"Fail!!"<<endl;
    }
    return 0;
}