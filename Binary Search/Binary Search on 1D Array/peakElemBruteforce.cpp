#include <iostream>
#include <vector>
using namespace std;
int peakElem(vector<int>& arr){
    int n = arr.size();
    if(n == 1) return 0;
    if(arr[n - 1] >= arr[n - 2]) return n - 1;
    if(arr[0] >= arr[1]) return 0;
    for(int i = 1; i < n - 1 ; i++){
        if(arr[i - 1] <= arr[i] && arr[i + 1] <= arr[i]){
            return i;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {1,2,1,3,5,6,4};
    cout<<peakElem(arr);
    return 0;
}