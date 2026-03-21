#include<iostream>
using namespace std;
int main() {
    //test cases
	int t;
    cout<<"Enter the number of Test Cases: ";
	cin>>t;
	while (t--) {
     //the cost of tickets
	 int c1,c2,c3,c4;
     cout<<"Enter the cost of tickets: ";
	 cin>>c1>>c2>>c3>>c4;
	 //the number of rickshaws and cabs
	 int n,m;
     cout<<"Enter the number of Rickshaws and Cabs: ";
	 cin>>n>>m;
	 //the number of rides by rickshaw 
	 int rick[n];
     cout<<"Enter the number of rides by rickshaw : ";
	 for (int i=0;i<n;i++) {
		 cin>>rick[i];
	 }
	 //the number of rides by cabs 
	 int cab[m];
     cout<<"Enter the number of rides by cab: ";
	 for (int i=0;i<m;i++) {
		 cin>>cab[i];
	 }

//Minimum cost for rides

int rickCost = 0;    //Minimum cost for Rickshaw
for (int i=0;i<n;i++) {
    rickCost += min(rick[i]*c1,c2) ;
} 
  rickCost = min(rickCost,c3);

int cabCost = 0;   //Minimum cost for Cabs
for (int i=0;i<m;i++) {
    cabCost += min(cab[i]*c1,c2) ;
}
    cabCost = min(cabCost,c3);

    int totalCost = min(rickCost+cabCost,c4);  //Total Minimum Cost

    cout<<totalCost<<endl;
}

return 0;
}