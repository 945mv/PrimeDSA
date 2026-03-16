#include<iostream>
#include<climits> //for INT_MIN and INT_MAX expression
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int largest= INT_MIN ; //-Infinity (-infinity isliye likha kee kyoki yeah max choti value deta hai toh iske andar kee sari value max hee hogi )
    for (int i=0;i<n;i++) {
    largest=max(arr[i],largest);
    }
    cout<<"Largest value is "<<largest;
    return 0;
}
