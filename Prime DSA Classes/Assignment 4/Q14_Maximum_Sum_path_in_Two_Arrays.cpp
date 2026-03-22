#include<iostream>
using namespace std;
int main() {
	int t;
    cout<<"Enter the number of test cases: ";
	cin>>t;
	while (t--) {
	int n,m;
    cout<<"Enter the size of an Array: ";
	cin>>n>>m;
	int arr1[n],arr2[m];
    cout<<"Enter the sorted elements in an Array: ";
	for (int i=0;i<n;i++) {
		cin>>arr1[i];
	}
	for (int j=0;j<m;j++) {
		cin>>arr2[j];
	}
	//Maximum Sum Path in Two Arrays
	int start = 0, end=0;
	int sum1 = 0, sum2 = 0, result = 0;
    
	while (start < n && end < m) {
		if (arr1[start]<arr2[end]) {
			sum1 = sum1 + arr1[start++];
		}
        else if (arr1[start] > arr2[end]) {
            sum2 = sum2 + arr2[end++];
        }
		else {
			result = result + max(sum1,sum2)+arr1[start];
			sum1 = sum2 = 0;
			start++;
			end++;
		}
	}
	while(start<n) {
	sum1 = sum1 + arr1[start++] ;
    }
	while (end<m) {
	sum2 = sum2 + arr2[end--] ;
    }
	result = result + max(sum1,sum2);
	cout<<result<<endl;
}
	return 0;
}