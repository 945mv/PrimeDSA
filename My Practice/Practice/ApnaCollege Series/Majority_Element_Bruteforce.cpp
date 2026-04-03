#include<iostream>
#include<vector>
using namespace std;

vector<int> MajorityElement(vector<int> nums)  {
    vector<int>ans;
    int n=nums.size();
    for (int i=0;i<n;i++) {
        int frequency=0;
        for (int j=0;j<n;j++) {
            if (j == i) {
                frequency++;
            }
        }
        if(frequency>n/2) {
        ans.push_back(nums[i]);
        return ans;
        }
    }
}
int main() {
    int n;
    cin>>n;

    vector<int>nums(n);
    for (int i=0;i<n;i++) {
        cin>>nums[i];
    }
    vector<int> ans=MajorityElement(nums);
    cout<<ans[1];
    return 0;
}