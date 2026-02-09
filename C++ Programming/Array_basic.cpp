#include <iostream>
using namespace std;
int main() {
    //create
    //First way
    int arr[5];   //by deafult garbage value hogi or baad hum change kar sakte hai
    //second way
    arr[0]=1;
    arr[1]=1;
    arr[2]=1;
    arr[3]=1;
    arr[4]=1;
    int arr_b[]={1,2,3,4,5}; //pahle se initialize hai or baad mai bhi change kar sakte hai
    //third way
    int n;
    cin>>n;
    int arr_c[n]; //by default garbage and baad mai change akr sakte hai
    //read
    int S= sizeof(arr_b)/sizeof(int);
    for (int i=0;i<S;i++) {
        cout<<arr_b[i]<<" ";
    }
    cout<<endl;
    for (int i=0;i<S;i++) {
        cout<<arr[i]<<" ";
    }
    //update 
    for (int i=0;i<S;i++) {
        arr[i]+=i;
    }
    cout<<endl;
    for (int i=0;i<S;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}