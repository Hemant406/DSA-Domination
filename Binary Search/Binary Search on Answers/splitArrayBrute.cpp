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
    
    for(int split = low;split <= high;split++){
        if(isPossible(arr,k,split)){
            return split;
        }
    }
    return -1;
}

int main() {
    
    vector<int> arr = {3,5,1};
    int k = 3;
    cout<<splitArray(arr,k);

    return 0;
}