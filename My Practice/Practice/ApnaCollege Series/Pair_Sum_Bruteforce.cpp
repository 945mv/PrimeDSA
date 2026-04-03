#include<iostream>
#include<vector>
using namespace std;
//Time Complexity --> O(n^2)
vector<int> PairSum(vector<int> nums, int target) {
    vector<int>ans;
    int n=nums.size();
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (nums[i]+nums[j]==target) {
                ans.push_back(i);  //for indices
            ans.push_back(j);    //for indices
        }
    }
}
return ans;
}
int main() {
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;

    vector<int>nums (n);
    cout<<"Enter the sorted Array: ";
     for (int i=0;i<n;i++) {
        cin>>nums[i];
     }


    int target;
    cout<<"Enter the target value: ";
    cin>>target;

   vector<int> ans = PairSum(nums, target);
   cout << ans[0]<< " , " <<ans[1]<<endl;
   return 0;
}