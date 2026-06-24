#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// This code will give TLE 
bool isPossible(vector<int>& bloomsDay, int day , int m , int k){
    int count = 0 , bouquet = 0;
    for(int i = 0; i < bloomsDay.size(); i++){
        if(bloomsDay[i] <= day){
            count++;
            if(count == k){
                bouquet++;
                count = 0;
            }
        }else{
            count = 0;
        }
    }
    return bouquet >= m;
}

int minPossibleDays(vector<int>& bloomsDay, int m , int k){
    int low = *min_element(bloomsDay.begin(),bloomsDay.end());
    int high = *max_element(bloomsDay.begin(),bloomsDay.end());
    
    for(int day = low ; day <= high ; day++){
        if(isPossible(bloomsDay,day,m,k)){
            return day;
        }
    }
    return -1;
}
int main() {
    vector<int> bloomsDay = {7, 7, 7, 7, 13, 11, 12, 7};
    int m = 2;
    int k = 3;
    cout<<minPossibleDays(bloomsDay,m,k);

    return 0;
}