#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int smallest= INT_MAX ; //+infinity (min mai yeah isliye likhte hai kyoki +infinity se bada kya hee hoga toh uske andar kee sare values choti hee hogi)
    for (int i=0;i<n;i++) {
        smallest=min(arr[i],smallest);
    }
     cout<<"Smallest value is "<<smallest;
     return 0;
}