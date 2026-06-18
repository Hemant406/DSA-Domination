#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int>& arr,int st,int end, int target){
    int mid = st + (end - st)/2;
    if(st > end){
        return -1;
    }
    if(target == arr[mid]){
        return mid;
    }else if(target < arr[mid]){
        return binarySearch(arr,st,mid - 1,target);
    }else{
        return binarySearch(arr,mid + 1,end,target);
    }
    
}
int main() {
    vector<int> arr = {-1,0,3,5,9,12};
    int n = arr.size();
    int target = 9;
    int ans = binarySearch(arr,0,n - 1,target);
    cout<<ans<<endl;
    return 0;
}