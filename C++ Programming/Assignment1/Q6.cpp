#include <iostream>
using namespace std;
int main() {
    int M;
    cin>>M;
    if (M>=80) {
        cout<<"Excellent"<<endl;
    } else if (M>=70) {
        cout<<"Good"<<endl;
    } else if (M>=60) {
        cout<<"Average"<<endl;
    } else {
        cout<<"Fail"<<endl;
    }
    return 0;
    }
