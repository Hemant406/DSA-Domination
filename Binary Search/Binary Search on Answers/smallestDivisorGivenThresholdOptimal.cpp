#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int smallestDivisor(vector<int>& arr, int limit) {
    int low = 1;
    int high = *max_element(arr.begin(),arr.end());
    int ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        int count = 0;
        for(int j = 0;j < arr.size();j++){
            int divide = ceil(double(arr[j]) / double(mid));
            count += divide;
        }
        if(count <= limit){
            ans = mid;
            high = mid - 1; 
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {8,4,2,3};
    int limit = 10;
    cout<<smallestDivisor(arr,limit);
    return 0;
}