#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of Elements in Array: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    //distinct element print
    for (int i=0;i<n;i++) {
          bool alreadyPresent = false;
      for (int j=0;j<i;j++) {  //yaha hum i tak isliye le jaa rahe hai kyoki hume pura loop nhi dekhna hai hume sirf last part hee check karna hai
            if (arr[i]==arr[j]) {
               alreadyPresent=true;
            }
        }
        if (!alreadyPresent) {
            cout<<arr[i]<<" ";
        }
    }
        return 0;
    }
