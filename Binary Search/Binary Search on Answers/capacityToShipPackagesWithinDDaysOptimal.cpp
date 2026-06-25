#include <bits/stdc++.h>
using namespace std;

int noOfDays(vector<int>& arr , int capacity){
    int currentLoad = 0;
    int days = 1;
    for(int weight : arr){
        if(currentLoad + weight > capacity){
            days++;
            currentLoad = weight;
        }else{
            currentLoad += weight;
        }
    }
    return days;
}

int shipWithinDays(vector<int>& arr , int day){
    int left = *max_element(arr.begin(),arr.end());
    int right = accumulate(arr.begin(),arr.end(),0);
    
    while(left < right){
        int mid = left + (right - left)/2;
        int needed = noOfDays(arr,mid);
        if(needed <= day){
            right = mid;
        }else{
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int day = 2;
    cout<<shipWithinDays(arr,day);
    return 0;
}