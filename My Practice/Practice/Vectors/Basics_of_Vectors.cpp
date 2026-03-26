#include<iostream>
#include<vector>    //stl container 
using namespace std;
int main() {   
    //Creating an empty vector
    vector<int>vec;
    //1st of Writing vector
    vector<int> vect = {1,2,3,4,5};
    cout<<vect[0]<<endl;
    cout<<vect[1]<<endl;
    cout<<vect[2]<<endl;
    cout<<vect[3]<<endl;
    cout<<vect[4]<<endl;
    cout<<endl;
    //2nd Way of writning vector
    vector<int>val(5,3);   
    //left side-->size of an Array 
    //right side-->index value
    cout<<val[0]<<endl;
    cout<<val[1]<<endl;
    cout<<val[2]<<endl;
    cout<<val[3]<<endl;
    cout<<val[4]<<endl;
    cout<<endl;
    //for each loop
    vector<char>loop={'a','b','c','d'};
    for (char val: loop) {  //vector kaa for-loop
        cout<< val<<endl;
    }
       cout<<endl;
    //Vector Functions :-
    //1. size
    cout<<"Size of Vector: "<<loop.size() <<endl;
   cout<<"Size of Vector : "<<vec.size() <<endl;
   cout<<endl;
   //2.Push Back(Add)
   vec.push_back(9);  //the elements increased in vector
   vec.push_back(10);
   vec.push_back(11);
   vec.push_back(12);
   vec.push_back(13);
   cout<<"After Push back the size is: "<<vec.size()<<endl;
   for (int val : vec) {
          cout<<"The added value in vector is : "<<val<<endl;
   }
   cout<<endl;
   //3.Pop Back(Delete)
   vec.pop_back();
   cout<<"After Pop back the size is: "<<vec.size()<<endl;
   for (int val : vec) {
    cout<<"The remianing value in vector is : "<<val<<endl;
   }
   cout<<endl;
   //4. Front(Start ke value ke liye)
   cout<<"The front value of vector is : "<<vec.front()<<endl;
   cout<<endl;
   //5.Back(End ke value ke liye)
   cout<<"The back value of vector is : "<<vec.back()<<endl;
   cout<<endl;
   //6. At (particular index value)
   cout<<"The value at index 0 : "<<vec.at(0)<<endl;
   cout<<"The value at index 1 : "<<vec.at(1)<<endl;
   cout<<endl;
   //capacity (capacity will always be double by increasing the elements)
   cout<<"The capacity of vector is : "<<vec.capacity()<<endl;
    return 0;
}