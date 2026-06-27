#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr,int n ,int m,int minAllowedDist){
    int balls = 1;
    int lastBasket = arr[0];
    for(int i = 1;i < n ;i++){
        if(arr[i] - lastBasket >= minAllowedDist){
            balls++;
            lastBasket = arr[i];

            if(balls == m){
                return true;
            }
        }
    }
    return false;
}

int maxDistance(vector<int>& arr, int m) {
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int st = 1;
    int end = arr[n - 1] - arr[0];
    int ans = 0;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4,7};
    int m = 3;
    cout<<maxDistance(arr,m);
}