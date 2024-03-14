#include <bits/stdc++.h>
using namespace std;

void io()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i : nums)
        {
            mp[i]++;
            if (mp[i] > 1)
            {
                return i;
            }
        }
        return nums.size();
    }
};

int main()
{
    io();
    Solution obj;
    vector<int> nums = { 1, 3, 4, 2, 2 };
    cout<<obj.findDuplicate(nums);
     return 0;
}
