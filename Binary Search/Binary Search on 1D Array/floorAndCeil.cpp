#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int findFloor(vector<int>& arr, int x){
    int st = 0;
    int n = arr.size();
    int end = n - 1;
    int floori = -1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(arr[mid] <= x){
            floori = arr[mid];
            st = mid + 1;
        }else{
            end = mid - 1; 
        } 
    }
    return floori;
}
int findCeil(vector<int>& arr, int x){
    int st = 0;
    int n = arr.size();
    int end = n - 1;
    int ceili = -1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(arr[mid] >= x){
            ceili = arr[mid];
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ceili;
}

pair<int,int> findFloorCeil(vector<int>& arr , int x){
    int ans1 = findFloor(arr,x);
    int ans2 = findCeil(arr,x);
    return make_pair(ans1,ans2);
}
int main() {
    vector<int> arr = {3,4,4,7,8,10};
    int x = 5;
    pair<int,int> ans = findFloorCeil(arr,x);
    cout<<"Floor and Ceil are : "<<ans.first<<" & "<<ans.second;
    return 0;
}