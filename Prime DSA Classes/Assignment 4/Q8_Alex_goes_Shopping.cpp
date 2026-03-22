#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of items in the Shop: ";
	cin>>n;
	int arr[n];
    cout<<"Enter the price of Items:  ";
	for (int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int q;
    cout<<"Enter the number of Queries: ";
	cin>>q;
	
	while (q--) {
		int A,k;
		cin>>A>>k;

        int count = 0;
        for (int i=0;i<n;i++) {
            if (A % arr[i] == 0) {
                count++;
            }
        }
            if (count>=k)  {
              cout<<"Yes"<<endl;
            }
            else {
                cout<<"No"<<endl;
            }
        }
        return 0;
    }