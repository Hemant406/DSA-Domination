#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();

    int row = 0 , col = m - 1;

    while(row < n && col >= 0){
        if(matrix[row][col] == target){
            return true;
        }else if(matrix[row][col] < target){
            row++;
        }else{
            col--;
        }
    }

    return false;
}
int main() {
    vector<vector<int>> arr = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24}};
    int target = 8;
    cout<<searchMatrix(arr,target);
    return 0;
}