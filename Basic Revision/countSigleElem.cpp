#include <bits/stdc++.h>
using namespace std;
int getSingleElem(vector<int>& arr){
    int n = arr.size();
    int xorr = 0;
    for(int i = 0; i < n ; i++){
        xorr = xorr ^ arr[i];
    }
    return xorr;
}
int main() {
    vector<int> arr = {2,2,1,4,1};
    int ans = getSingleElem(arr);
    cout<<"The answer is : "<<ans<<endl;
    return 0;
}