#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>& arr , int n , int m, int maxAllowedPages){
    int students = 1, pages = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxAllowedPages) return false;
        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }else{
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false : true;
}

int allocateBook(vector<int>& arr , int n , int m){
    if(m > n) return -1;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int st = 0,end = sum,ans = -1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {12, 34, 67, 90};
    int n = 4, m = 2;
    cout<<allocateBook(arr,n,m);
    return 0;
}