#include<iostream>
using namespace std;
int main() {
        int n;
        cin>>n;
        int ans=0;
        int l=1;
        int h=n;
        while (l<=n) {
                int m=l+(h-l)/2;
                if (m*m==n) {
                        return m;
                }
                else if (m*m<n) {
                        ans=m;
                        l=m+1;
                }
                else {
                        h=m-1;
                }
        }
        return ans;
}