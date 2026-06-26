#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>& arr , double hour, int speed){
    int n = arr.size();
    double hrCnt = 0;
    for(int i = 0; i < n; i++){
        if(i < n-1){
            hrCnt += ceil(double(arr[i])/speed);
        }else{
            hrCnt += double(arr[i])/speed;
        }
    }
    if(hrCnt <= hour){
        return true;
    }
    return false;
}

int minSpeed(vector<int>& arr , double hour){
    int maxi = *max_element(arr.begin(),arr.end());
    for(int i = 1; i <= maxi ;i++){
        if(isPossible(arr,hour,i)){
            return i;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {1,3,2};
    double hour = 2.7;
    cout<<minSpeed(arr,hour);
    return 0;
}