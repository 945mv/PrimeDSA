#include <iostream>
using namespace std;
int main() {
// 1 
//2 2
//3 0 3
//4 0 0 4
//5 0 0 0 5
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i=1;i<=n;i++) { //Row
        cout<<i<<" "; //Number Printing
            if (i>2) {
                for (int j=1;j<=i-2;j++) { //column
                    cout<<"0"<<" "; //Zero Printing
            }
         }
            if (i>1) {
                    cout<<i<<" "; //Number Printing
            }
        cout<<endl;
    }
    return 0;
}