#include<iostream>
using namespace std;
//Inverse of an array :- jisme index-->value & value-->index
int main() {
    int n;
    cin >> n;
    int arr[n], val[n];
    // input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // inverse logic
    for (int i = 0; i < n; i++) {
        val[arr[i]] = i;   // val-->index 
    }
    // print result
    for (int i = 0; i < n; i++) {
        cout << val[i] << " ";   //value print 
    }

    return 0;
}