#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
//initialization
vector<int>a;
//updation
    a.push_back(1);  //add
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);
    a.pop_back();    //delete
     cout<<a.size()<<endl;
     cout<<a.capacity()<<endl;
    //print 
    for (int i=0;i<a.size();i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;

    reverse(a.begin(),a.end());
    sort(a.begin(),a.end());

    //value insert
    a.insert(a.end()-1,7);
    for (int i=0;i<a.size();i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int n=6;
    vector<int> arr(n,1);
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}