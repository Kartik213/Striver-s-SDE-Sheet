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
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        for (int i = 0; i < prices.size();i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] > prices[i]) {
                    maxProfit = max(prices[j] - prices[i], maxProfit);
                }
                else {
                    i = j;
                }
            }
        }
        return maxProfit;
    }

};

int main() {
    io();
    Solution obj;
    vector<int> prices = { 7,1,5,3,6,4 };
    cout<<obj.maxProfit(prices);
    return 0;
}
