#include<iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
    cout<<"Enter the Element: ";
	cin>>n;
	int arr[n];
    cout<<"Enter the Number of Elements: ";
	//input
	for (int i=0;i<n;i++) {
		cin>>arr[i];
	}
    //sort karne ke liye
	sort(arr, arr+n);
	//output
    cout<<"The sorted Zeroes and Ones: ";
	for (int i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	return 0;
}