#include<iostream>
#include<vector>
using namespace std;

    //Time Complexity --> O(n) Linear Search

    vector<int> PairSum(vector<int> nums, int target) {
    vector<int>ans;
    int n=nums.size();
    int i=0, j=n-1;
    while(i<j) {
       int  pairSum=nums[i]+nums[j];
        if(pairSum>target) {
            j--;
        }
        else if(pairSum<target) {
            i++;
        }
        else {
           ans.push_back(nums[i]);   //store value
           ans.push_back(nums[j]);   //if indices value then nums(i)/nums(j)
           return ans;
        }
    }
    return ans;
    }

    int main() {
        int n;
        cout<<"Enter the size of an Array: ";
        cin>>n;

    vector <int> nums(n);
    cout<<"Enter the Sorted Array: ";
    for (int i=0;i<n;i++) {
        cin>>nums[i];
    }
     int target;
     cout<<"Enter the target value: ";
     cin>>target;

    vector<int> ans = PairSum(nums,target);
    if(ans.size()==0) {
        cout<<"No Pair found";
    }
    else {
              cout<<ans[0]<<" , "<<ans[1]<<endl;
    }
    return 0;
}