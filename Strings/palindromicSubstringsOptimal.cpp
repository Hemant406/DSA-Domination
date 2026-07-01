#include <bits/stdc++.h>
using namespace std;

int expand(string s, int st, int end){
    int cnt = 0;
    while(st >= 0 && end < s.length() && s[st] == s[end]){
        st--;
        end++;
        cnt++;
    }
    return cnt;;
}

int countSubstr(string s){
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        cnt += expand(s,i,i);
        cnt += expand(s,i,i + 1);
    }
    return cnt;
}

int main(){
    string s = "babad";
    cout<<countSubstr(s);
    return 0;
}