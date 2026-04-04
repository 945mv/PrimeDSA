#include<iostream>
#include<vector>
using namespace std;

//Time Complexity --> O(n)
int MajorityElement(vector<int> nums) {
    int freq = 0, candidate = 0;

    // Step 1: Find candidate
    for (int i = 0; i < nums.size(); i++) {
        if (freq == 0) {
            candidate = nums[i];
        }

        if (nums[i] == candidate) {
            freq++;
        } else {
            freq--;
        }
    }

    // Step 2: Verify
    int count = 0;
    for (int x : nums) {
        if (x == candidate) count++;
    }

    if (count > nums.size()/2)
        return candidate;
    else
        return -1;   // No majority
}

int main() {
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;

    vector<int> nums(n);
    for (int i=0;i<n;i++) {
        cin>>nums[i];
    }

    int ans = MajorityElement(nums);

    if(ans != -1) {
        cout << ans;
    } else {
        cout << "No Majority Element!";
    }

    return 0;
}