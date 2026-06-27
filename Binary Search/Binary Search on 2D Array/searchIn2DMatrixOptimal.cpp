#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int low = 0, high = n * m - 1;
        while(low <= high){
            int mid = low + (high - low)/2;

            int rows = mid/m;
            int cols = mid % m;

            if(matrix[rows][cols] == target){
                return true;
            }else if(target > matrix[rows][cols]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
       return false;
}

int main(){
    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8,9},{10,11,12,13}};
    int target = 8;
    cout<<searchMatrix(arr,target);
}