#include <iostream>
#include <vector>
using namespace std;
int upperBound(vector<int>& arr , int target){
    int n = arr.size();
    for(int i =0;i < n; i++){
        if(arr[i] > target){
            return i;
        }
    }
    return n;
    
}
int main() {
    vector<int> arr = {3,5,8,9,15,19};
    int target = 9;
    int ans = upperBound(arr,target);
    cout<<ans<<endl;
    return 0;
}