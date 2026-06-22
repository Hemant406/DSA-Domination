#include <iostream>
using namespace std;
int findSqrt(int val){
    int ans = 0;
    for(int i = 1;i <= val;i++){
        if((long long)i * i <= val){
            ans = i;
        }else{
            break;
        }
    }
    return ans;
}
int main() {
    int n = 36;
    cout<<findSqrt(n);
    return 0;
}