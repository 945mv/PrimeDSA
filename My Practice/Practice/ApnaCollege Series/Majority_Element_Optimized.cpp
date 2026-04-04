#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//Time Complexity --> O(nlogn)
vector<int> MajorityElement(vector<int> nums) {
    vector<int>ans;
    int n=nums.size();

    sort(nums.begin(),nums.end());

    int freq=1;
    for (int i=1;i<n;i++) {
        if(nums[i]==nums[i-1]) {
            freq++;
        }
        else {
            freq=1;
        }
        if(freq>n/2) {
            ans.push_back(nums[i]);
            return ans;
        }
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;

    vector<int> nums(n);
    for (int i=0;i<n;i++) {
        cin>>nums[i];
    }
    vector<int> ans=MajorityElement(nums);
    if(ans.size()>0) {
        cout<<ans[0];
    }
    else {
        cout<<"No Majority Element!";
    }
    return 0;
}