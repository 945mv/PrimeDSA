#include <iostream>
using namespace std;
int main() {
    int M;
    cout<<"Enter the Marks: ";
    cin>>M;
    if (M>=90) {
        cout<<"Excellent!"<<endl;
    } else if (M>=80) {
       cout<<"Very Good!"<<endl;
    } else if (M>=70) {
        cout<<"Good!"<<endl; 
    } else if (M>=60) {
        cout<<"Need to improve!"<<endl;
    } else {
        cout<<"Fail!";
    }
    return 0;
}