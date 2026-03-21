#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;
int main() {

    int t;
    cout<<"Enter the Number of Test Cases: ";
    cin>>t;
    while(t--) {

        int n;
        cout<<"Enter the Number of available Roses: ";
        cin>>n;

        int arr[n];
        cout<<"Enter the prices of each Roses: ";
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }

        int M;
        cout<<"Enter the amount of Money Deepak has: ";
        cin>>M;

        //sort karenge
        sort(arr, arr+n);
        //Two Pointer Approach lagayenge
        int left=0, right=n-1;
        int ans1=0, ans2=0;
        int minDiff=INT_MAX;
        while(left<right) {
            int sum = arr[left]+arr[right];
            if (sum==M) {
                if (arr[right]-arr[left]<minDiff) {
                    minDiff = arr[right]-arr[left];
                    ans1=arr[left];
                    ans2=arr[right];
                }
                left++;
                right--;
        }
        else if (sum<M)
        {
            left++;
        } else {
            right --;
        }
    }
    cout << "Deepak should buy roses whose prices are " 
         << ans1 << " and " << ans2 << "."<< endl;
	}
    return 0;
}
