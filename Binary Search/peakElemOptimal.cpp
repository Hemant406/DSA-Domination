#include <iostream>
#include <vector>
using namespace std;
int peakElem(vector<int>& arr){
    int n = arr.size();
    int st = 0, end = n - 1;
    while(st < end){
        int mid = st + (end - st)/2;
        if(arr[mid] > arr[mid + 1]){
            end = mid;
        }else{
            st = mid + 1;
        }
    }
    return st;
}
int main() {
    vector<int> arr = {1,2,1,3,5,6,4};
    cout<<peakElem(arr);
    return 0;
}