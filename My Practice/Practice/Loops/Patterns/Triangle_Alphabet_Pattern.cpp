#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    char ch='a';
    for (int i=0;i<n;i++) { //inner loop
        for (int j=0;j<i+1;j++) { //outer loop 0-->i+1 
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}