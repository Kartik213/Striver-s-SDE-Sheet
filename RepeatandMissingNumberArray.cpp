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
    vector<int> repeatedNumber(vector<int> &A)
    {
        int missing = -1, twice = -1;
        int n = A.size();
        // Brute force
        // for (int i = 1; i <= n; i++)
        // {
        //     int cnt = 0;
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (A[j] == i)
        //         {
        //             cnt++;
        //         }
        //     }
        //     if (cnt == 2)
        //         twice = i;
        //     else if (cnt == 0)
        //         missing = i;

        //     if (missing != -1 && twice != -1)
        //         break;
        // }

        // Hash map
        int hash[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            hash[A[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (hash[i] == 2)
                twice = i;
            else if (hash[i] == 0)
                missing = i;
            if (twice != -1 && missing != -1)
                break;
        }
        return {twice, missing};
    }
};

int main()
{
    io();
    Solution obj;
    vector<int> A = {3, 1, 2, 5, 3};
    vector<int>res = obj.repeatedNumber(A);
    cout<<res[0] << " " << res[1];
    return 0;
}
