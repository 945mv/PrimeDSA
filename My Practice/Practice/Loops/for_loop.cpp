#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int sum=0;
    for (int i=1;i<=n;i++) { //Initialization;Updation;Condition
        sum+=i;
        if(i==5) {  
            break; //Keyword--> Reserved words
        }
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
 }