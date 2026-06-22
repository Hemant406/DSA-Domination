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
    int maxVal = *max_element(arr.begin(), arr.end());
    for(int i = 1;i <= maxVal;i++){
        int hours = calculateTotalHours(arr,i);
        
        if(hours <= h) return i;
    }
    return maxVal;
}
int main() {
    vector<int> arr = {3,6,7,15};
    int h = 8;
    cout<<minSpeed(arr,h);
    return 0;
}