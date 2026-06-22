#include <iostream>
using namespace std;
int findSqrt(int val){
    if (val < 2) return val;
    int st = 1, end = val /2 ,ans = 0;
    while(st <= end){
        int mid = st + (end - st)/2;
        if((long long)mid * mid <= val){
            ans = mid;
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}
int main() {
    int n = 1;
    cout<<findSqrt(n);
    return 0;
}