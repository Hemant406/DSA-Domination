#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr, int k , int split){
    int partitions = 1, count = 0;
    for(int i = 0; i < arr.size(); i++){
        if(count + arr[i] <= split){
            count += arr[i];
        }else{
            partitions++;
            count = arr[i];
        }
    }
    return partitions <= k;
}

int splitArray(vector<int>& arr , int k ){
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    int ans = low;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(isPossible(arr,k,mid)){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    
    vector<int> arr = {3,5,1};
    int k = 3;
    cout<<splitArray(arr,k);

    return 0;
}