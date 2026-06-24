#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minDivisor(vector<int>& arr, int limit){
    int maxE = *max_element(arr.begin(),arr.end());
    for(int i = 1 ; i <= maxE; i++){
        int count = 0;
        for(int j = 0;j < arr.size();j++){
            int divide = ceil(double(arr[j]) / double(i));
            count += divide;
        }
        if(count <= limit){
            return i;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {8,4,2,3};
    int limit = 10;
    cout<<minDivisor(arr,limit);

    return 0;
}