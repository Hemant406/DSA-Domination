#include <iostream>
#include <vector>
using namespace std;
int howManyTimesAnArrayIsRotated(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            return i + 1;
        }
            
    }
    return 0;
}
int main() {
    vector<int> arr = {4,5,6,7,0,1,2,3};
    cout<<howManyTimesAnArrayIsRotated(arr);
    return 0;
}