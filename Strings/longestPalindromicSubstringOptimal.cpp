#include <bits/stdc++.h>
using namespace std;

int expand(string s, int st, int end){
    while(st >= 0 && end < s.length() && s[st] == s[end]){
        st--;
        end++;
    }
    return end - st - 1;
}

string longestPalindrome(string s){
    if(s.length() <= 1){
        return s;
    }
    int left = 0, right = 0;
    for(int i = 0; i < s.length(); i++){
        int len1 = expand(s,i,i);
        int len2 = expand(s,i,i + 1);
        int len = max(len1,len2);
        
        if(len > right - left + 1){
            left = i - (len - 1)/2;
            right = i + len/2;
        }
    }
    return s.substr(left,right - left + 1);
}

int main(){
    string s = "babad";
    cout<<longestPalindrome(s);
    return 0;
}