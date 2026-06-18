#include <bits/stdc++.h>
using namespace std;
void arm(int num){
    int temp = num,n = num;
    int sum = 0,digits = 0;
    while(temp > 0){
        temp /= 10;
        digits++;
    }
    while(n > 0){
        int digit = n % 10;
        sum += pow(digit,digits);
        n /= 10;
    }
    
    if(sum == num){
        cout<<"Armstrong number";
    }else{
        cout<<"Not an Armstrong number";
    }
}
int main() {
    int num = 153;
    arm(num);
    return 0;
}