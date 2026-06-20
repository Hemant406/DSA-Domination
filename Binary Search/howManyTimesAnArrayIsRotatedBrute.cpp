#include <iostream>
#include <vector>
using namespace std;
int howManyTimesAnArrayIsRotated(vector<int>& arr){
    int n = arr.size();
    int minVal = arr[0];
    int minIdx = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] < minVal){
            minVal = arr[i];
            minIdx = i;
        }
    }
    return minIdx;
}
int main() {
    vector<int> arr = {4,5,6,7,0,1,2,3};
    cout<<howManyTimesAnArrayIsRotated(arr);
    return 0;
}