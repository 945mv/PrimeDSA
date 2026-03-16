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
    int largest=INT_MIN;
    int index=-1;           //index -1 invalid index hota hai matlab abhi isme koi value nhi hai
    for (int i=0;i<n;i++) {
        if (arr[i]>=largest) {  
            // = to use karo jab same element mai last ka index chahiye ho
            // only > use karo jab same element mai first index chaiye ho
            largest=arr[i];
            index=i;
        }
    }
    cout<<"Largest value is "<<largest<<endl;
    cout<<"Index value of Largest is "<<index;
    return 0;
}