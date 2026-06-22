#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int calculateTotalHours(vector<int>& a,int hourly){
    int totalHours = 0;
    for(int pile : a){
        totalHours += (pile + hourly - 1)/hourly;
    }
    return totalHours;
}

int minSpeed(vector<int>& arr, int h){
    int maxVal = *max_element(arr.begin(),arr.end());
    int st = 1 , end = maxVal;
    int ans = maxVal;
    while(st <= end){
        int mid = st + (end - st)/2;
        int hours = calculateTotalHours(arr,mid);
        if(hours <= h){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
    
}
int main() {
    vector<int> arr = {25, 12, 8, 14, 19};
    int h = 5;
    cout<<minSpeed(arr,h);
    return 0;
}