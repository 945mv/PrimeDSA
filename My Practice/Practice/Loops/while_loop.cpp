#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the Number: ";
    cin>>n; 
    int count=1;        //Initialization
    while (count<=n) { //Condition
        cout<<count<<" ";
        count++;      //Updation
    }
    return 0;
}