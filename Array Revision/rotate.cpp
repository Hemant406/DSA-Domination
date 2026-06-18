#include <iostream>
using namespace std;
void reverse(int arr[],int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main() {
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int k;
    cout<<"Enter number of rorations : ";
    cin>>k;
    k = k%n;
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    reverse(a,0,n-k-1);
    reverse(a,n-k,n-1);
    reverse(a,0,n-1);

    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}