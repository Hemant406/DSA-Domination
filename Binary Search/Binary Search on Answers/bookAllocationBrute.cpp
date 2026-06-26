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
    for(int i = 0; i <=sum; i++){
        if(isPossible(arr,n,m,i)){
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {12, 34, 67, 90};
    int n = 4, m = 2;
    cout<<allocateBook(arr,n,m);
    return 0;
}