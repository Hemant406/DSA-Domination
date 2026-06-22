#include <iostream>
#include <vector>
using namespace std;
int lowerBound(vector<int>& arr , int target){
    int n = arr.size();
    for(int i = 0;i<n;i++){
        if(arr[i] >= target){
            return i;
        }
    }
    return n;
}
int main() {
    vector<int> arr = {1,2,2,3,5};
    int target = 3;
    int ans = lowerBound(arr,target);
    cout<<ans<<endl;
    return 0;
}