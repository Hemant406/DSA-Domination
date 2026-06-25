#include <bits/stdc++.h>
using namespace std;

int missingK(vector<int>& arr, int k){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] <= k){
            k++;
        }else{
            break;
        }
    }
    return k;
}

int main() {
    vector<int> arr = {4, 7, 9, 10};
    int k = 4;
    cout<<missingK(arr,k);
    return 0;
}