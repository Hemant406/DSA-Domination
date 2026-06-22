#include <iostream>
#include <vector>
using namespace std;
int lastOccur(vector<int>& arr, int x){
    int st = 0;
    int n = arr.size();
    int end = n - 1;
    int ans = -1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(arr[mid] == x){
            ans = mid;
            st = mid + 1;
        }else if(arr[mid] > x){
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}

int firstOccur(vector<int>& arr, int x){
    int st = 0;
    int n = arr.size();
    int end = n - 1;
    int ans = -1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(arr[mid] == x){
            ans = mid;
            end = mid - 1;
        }else if(arr[mid] > x){
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {3, 4, 13, 13, 13, 20, 40};
    int x = 25;
    cout<<firstOccur(arr,x)<<endl;
    cout<<lastOccur(arr,x);
    return 0;
}