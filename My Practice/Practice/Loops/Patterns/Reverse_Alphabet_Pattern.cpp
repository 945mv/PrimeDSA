#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    char ch='A';
    for (int i=0;i<n;i++) {
        for (int j=i+1;j>0;j--) {
            cout << char(ch+(j-1)) <<" "; //j-1 isliye likha kyoki 'A'+ j karne se 'B' se shuru hoga toh fir j-1 kiya toh 'A' se shuru ho raha hai
        }
        cout<<endl;
    }
    return 0;
}