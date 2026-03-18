#include<iostream>
using namespace std;
int main() {
        int n;
        cout<<"Enter the value of n: ";
        cin>>n;
        int ans=0;
        int l=1;
        int h=n;
        while (l<=h) {
                int m=l+(h-l)/2;
                if (m==n / m) {
                        ans = m;
                        break;
                }
                else if (m<n / m) {
                        ans=m;
                        l=m+1;
                }
                else {
                        h=m-1;
                }
        }
        cout << "Hence, the Square root of "<<n<<" is "<< ans;
        return 0;
}