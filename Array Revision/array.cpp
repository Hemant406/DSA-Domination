#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a(5);
    vector<int> b(5);
    for(int i = 0;i<a.size();i++){
        a[i] = i+1;
    }
    for(int j = 0;j<b.size();j++){
        b[j] = a[b.size()-1-j];
    }
    //printing a
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<a.size()<<endl;

    //printing b
    for(int i = 0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<b.size()<<endl;

    return 0;
}