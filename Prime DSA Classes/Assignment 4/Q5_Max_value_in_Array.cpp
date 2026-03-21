#include <iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of elements in an Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = arr[0];
    cout<<"Hence, the maximum value in an Array is ";
for(int i=1;i<n;i++){
    if(ans < arr[i]){
        ans = arr[i];
    }
}
    cout<<ans<<endl;
    return 0;
}