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
    
    for(int capacity = left; capacity <= right; capacity++){
        int needed = noOfDays(arr,capacity);
        
        if(needed <= day){
            return capacity;
        }
    }
    return right;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int day = 2;
    cout<<shipWithinDays(arr,day);
    return 0;
}