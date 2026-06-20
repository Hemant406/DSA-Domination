#include <iostream>
#include <vector>
using namespace std;
int howManyTimesAnArrayIsRotated(vector<int>& arr){
    int n = arr.size();
    int st = 0 , end = n - 1;
    while(st < end){
        int mid = st + (end - st)/2;
        if(arr[mid] > arr[end]){
            st = mid + 1;
        }else{
            end = mid;
        }
    }
    return st;
}
int main() {
    vector<int> arr = {4,5,6,7,0,1,2,3};
    cout<<howManyTimesAnArrayIsRotated(arr);
    return 0;
}