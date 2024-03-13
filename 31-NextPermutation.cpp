#include<bits/stdc++.h>
using namespace std;

void io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class Solution {
    public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        for (i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                break;
            }
        }
        if (i < 0) {
            reverse(nums.begin(), nums.end());
        }
        else {
            for (j = n - 1; j > i; j--) {
                if (nums[j] > nums[i]) {
                    break;
                }
            }
            swap(nums[j], nums[i]);
            reverse(nums.begin() + i + 1, nums.end());
        }
    }
};

int main() {
    io();
    Solution obj;
    vector<int>nums = {1, 2, 3};
    for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;
    obj.nextPermutation(nums);
    for (auto it : nums) {
        cout << it << " ";
    }
    return 0;
}
