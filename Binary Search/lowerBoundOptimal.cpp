#include <iostream>
#include <vector>
using namespace std;
int lowerBound(vector<int>& arr , int target){
    int st = 0;
    int n = arr.size();
    int end = n - 1;
    int ans = n;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(arr[mid] >= target){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {1,2,2,3,3,5};
    int target = 2;
    int ans = lowerBound(arr,target);
    cout<<ans<<endl;
    return 0;
}