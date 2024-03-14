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
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;

        // Brute force

        // for(int i=0; i<n;i++){
        //     int start = intervals[i][0];
        //     int end = intervals[i][1];
        //     if(!res.empty() && end <= res.back()[1]){
        //         continue;
        //     }
        //     for(int j=i+1;j<n;j++){
        //         if(intervals[j][0] <= end){
        //             end = max(end, intervals[j][1]);
        //         }else{
        //             break;
        //         }
        //     }
        //     res.push_back({start, end});
        // }

        // Now try to do the same thing in single iteration
        for (int i = 0; i < n; i++)
        {
            if (res.empty() || intervals[i][0] > res.back()[1])
            {
                res.push_back(intervals[i]);
            }
            else
            {
                res.back()[1] = max(res.back()[1], intervals[i][1]);
            }
        }
        return res;
    }
};

int main()
{
    io();
    Solution obj;
    vector<vector<int>> intervals = { { 1, 3 }, { 2, 6 }, { 8, 10 }, { 15, 18 } };
    for (auto vec : intervals)
    {
        for (int it : vec)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    intervals = obj.merge(intervals);
    cout << endl;
    for (auto vec : intervals)
    {
        for (int it : vec)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
