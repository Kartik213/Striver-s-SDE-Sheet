#include <bits/stdc++.h>
using namespace std;

void io(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class Solution{
    public:
        void rotate(vector<vector<int>> &matrix)
        {
            int n = matrix.size();
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
            for (auto &it : matrix)
            {
                reverse(it.begin(), it.end());
            }
        }
};

int main(){
    io();
    Solution obj;
    vector<vector<int>> matrix = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    for (auto vec : matrix)
    {
        for (int it : vec)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    obj.rotate(matrix);
    cout<<endl;
    for (auto vec : matrix)
    {
        for (int it : vec)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
