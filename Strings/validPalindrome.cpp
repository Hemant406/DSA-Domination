#include <bits/stdc++.h>
using namespace std;

bool isAlNum(char ch){
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }
    return false;
}

bool isPalindrome(string s) {
    int st = 0, end = s.length() - 1;
    while(st < end){
        if(!isAlNum(s[st])){
            st++;
            continue;
        }
        if(!isAlNum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}


int main() {
    string s = "aba";
    if(isPalindrome(s)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}