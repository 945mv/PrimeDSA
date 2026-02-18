#include <iostream>
using namespace std;
int main() {
    cout<<"ENTER THE NUMBER OF ELEMENTS: ";
    int n;
    cin>>n;
    cout<<"ENTER THE ELEMENTS: ";
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    //Selection Sort
    for (int i=0;i<n;i++) {
        int min=i;
        for (int j=i+1;j<n;j++) {
            if (arr[j]<arr[min]) {
                min=j;
            }
        }
        swap(arr[i],arr[min]);
        }
        cout<<"Sorted Array through Selection Sort"<<endl;
        for (int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }
        return 0;
    }
