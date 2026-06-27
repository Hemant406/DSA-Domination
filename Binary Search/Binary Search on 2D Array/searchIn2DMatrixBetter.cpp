#include <bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int>& arr , int target){
    int n = arr.size();
    int low = 0, high = n - 1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            return true;
        }else if(target > arr[mid]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& arr , int target){
    int n = arr.size();
    int m = arr[0].size();

    for(int i = 0; i < n; i++){
        if(arr[i][0] <= target && target <= arr[i][m - 1]){
            return binarySearch(arr[i],target);
        }
    }
    return false;
}
int main() {
    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8,9},{10,11,12,13}};
    int target = 8;
    cout<<searchMatrix(arr,target);
    return 0;
}