#include <iostream>
#include <vector>
using namespace std;
int main() {
    //initilization
    vector<int> a;
    //updation
    a.push_back(12);  //add
    a.push_back(19);
    a.push_back(67);
    a.push_back(45);
    a.push_back(10);
    a.push_back(15);
    a.push_back(18);
    a.pop_back();    //delete
//print the array
for (int i=0;i<a.size();i++) {
    cout<<a[i]<<" ";
}
cout<<endl;
//For the finding the value of front and back
cout<<a.front()<<endl;
cout<<a.back()<<endl;
return 0;
}