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
        if(hrCnt > hour) return false;
    }
    return true;
}

int minSpeed(vector<int>& arr , double hour){
    int st = 1;
    int end = (int)1e7;
    int ans = -1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(isPossible(arr,hour,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans ;
    
}
int main() {
    vector<int> arr = {1,3,2};
    double hour = 2.7;
    cout<<minSpeed(arr,hour);
    return 0;
}