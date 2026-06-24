#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& bloomsDay, int day , int m , int k){
    int count = 0 , bouquet = 0;
    for(int i = 0; i < bloomsDay.size(); i++){
        if(bloomsDay[i] <= day){
            count++;
            if(count == k){
                bouquet++;
                count = 0;
            }
        }else{
            count = 0;
        }
    }
    return bouquet >= m;
}

int minPossibleDays(vector<int>& bloomsDay, int m , int k){
    int low = *min_element(bloomsDay.begin(),bloomsDay.end());
    int high = *max_element(bloomsDay.begin(),bloomsDay.end());
    int ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(isPossible(bloomsDay,mid,m,k)){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}
int main() {
    vector<int> bloomsDay = {1,10,3,10,2};
    int m = 3;
    int k = 2;
    cout<<minPossibleDays(bloomsDay,m,k);

    return 0;
}