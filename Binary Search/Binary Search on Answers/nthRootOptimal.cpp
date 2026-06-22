#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int nthRoot(int n, int m){
    int st = 1, end = m;
    while(st <= end){
        int mid = st + (end - st)/2;
        int ans = 1;
        
        for(int i = 0; i < n; i++){
            ans *= mid;
            if(ans > m) break;
        }
        
        if(ans == m) return mid;
        else if(ans < m) st = mid + 1;
        else end = mid - 1;
    }
    return -1;
}
int main() {
    int n = 3;
    int m = 1;
    cout<<nthRoot(n,m);
    return 0;
}