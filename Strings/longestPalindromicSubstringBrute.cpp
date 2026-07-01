#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(const string& s, int i , int j){
    int st = i, end = j;
    while(st < end){
        if(s[st] != s[end]) return false;
        st++;
        end--;
    }
    return true;
}
string longestPalindrome(string s) {
    string res = "";
    if(s.length() == 1) return s;
    for(int i = 0; i < s.length(); i++){
        for(int j = i; j < s.length(); j++){
            if(isPalindrome(s,i,j)){
                if(j - i + 1 > res.length()){
                    res = s.substr(i,j - i + 1);
                }
            }
        }
    }
    return res;
}

int main() {
    string s = "babad";
    cout<<longestPalindrome(s);

    return 0;
}