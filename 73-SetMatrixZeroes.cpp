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
    // creating a visited matrix to keep track of the visited block and
    // checking if it contains zero then set the entire row and column
    // zero and mark visited only true at the blocks where we marked zero

    // void setZeroes(vector<vector<int>>& matrix) {
    //     int row = matrix.size();
    //     int col = matrix[0].size();

    //     vector<vector<bool>> vis(row, vector<bool>(col, false));

    //     for(int i=0; i<row; i++){
    //         for(int j=0;j<col; j++){
    //             if(!vis[i][j] && matrix[i][j] == 0){
    //                 int n = 0;
    //                 int m = 0;
    //                 while(n < col){
    //                     if(matrix[i][n] != 0){
    //                         matrix[i][n] = 0;
    //                         vis[i][n] = true;
    //                     }
    //                     n++;
    //                 }
    //                 while(m < row){
    //                     if(matrix[m][j] != 0){
    //                         matrix[m][j] = 0;
    //                         vis[m][j] = true;
    //                     }
    //                     m++;
    //                 }
    //             }
    //         }
    //     }
    // }

    // creating two vectors row and col
    // setting row and col true based on 
    // the value of the matrix if the block
    // is 0 then set the corresponding index in row and col true
    // then again iterate the matrix and set zero where the col and row are true
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<bool>row(n, false);
        vector<bool>col(m, false);
        for (int i = 0; i < n; i++) {
            for (int j = 0;j < m; j++) {
                if(matrix[i][j] == 0){
                    row[i] = true;
                    col[j] = true;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if(row[i]){
                int j = 0;
                while(j < m){
                    matrix[i][j] = 0;
                    j++;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            if (col[i]) {
                int j = 0;
                while (j < n) {
                    matrix[j][i] = 0;
                    j++;
                }
            }
        }
    }
};

int main() {
    io();
    vector<vector<int>>matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    for (auto vec : matrix) {
        for (auto it : vec) {
            cout << it << " ";
        }
        cout << endl;
    }
    cout<<endl;
    Solution obj;
    obj.setZeroes(matrix);
    for (auto vec : matrix) {
        for (auto it : vec) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
