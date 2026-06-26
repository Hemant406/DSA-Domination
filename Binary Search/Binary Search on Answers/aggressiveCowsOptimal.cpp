#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>& arr,int n ,int c,int minAllowedDist){
    int cows = 1;
    int lastStall = arr[0];
    for(int i = 1;i < n ;i++){
        if(arr[i] - lastStall >= minAllowedDist){
            cows++;
            lastStall = arr[i];
        }
        if(cows == c){
            return true;
        }
    }
    return false;
}


int minDist(vector<int>& arr, int n , int c){
    sort(arr.begin(),arr.end());
    int st = arr[0];
    int end = arr[n - 1] - arr[0];
    int ans = -1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(isPossible(arr,n,c,mid)){
            ans = mid;
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {4,2,1,3,6};
    int n = 5;
    int c = 2;
    cout<<minDist(arr,n,c);
    return 0;
}