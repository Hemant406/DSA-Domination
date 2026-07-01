#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length() != t.length()) return false;
    int freq[26] = {0};

    for(int i = 0; i < s.length(); i++){
        freq[s[i] - 'a']++;
    }
    for(int j = 0; j < t.length(); j++){
        freq[t[j] - 'a']--;
    }

    for(int i = 0; i < 26; i++){
        if(freq[i] != 0) return false;
    }

    return true;
}

int main(){
    string s = "anagram";
    string t = "nagaram";
    cout<<isAnagram(s,t);
    return 0;
}