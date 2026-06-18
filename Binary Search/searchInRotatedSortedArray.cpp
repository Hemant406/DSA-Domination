#include <iostream>
#include <vector>
using namespace std;
int searchInRotatedSortedArray(vector<int>& arr, int x){
    int st = 0;
    int n = arr.size();
    int end = n - 1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(arr[mid] == x){
            return mid;
        }
        
        if(arr[st] <= arr[mid]){
            if(arr[st] <= x && x <= arr[mid]){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }else{
            if(arr[mid] <= x && x <= arr[end]){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {4,5,6,7,0,1,2};
    int x = 0;
    cout<<searchInRotatedSortedArray(arr,x);
    return 0;
}