#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i = 0 ;i< n-1;i++){
        int si = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[si]){
                si = j;
            }
        }
        swap(arr[i],arr[si]);
    }
}
int main() {
    int arr[] = {5,4,3,2,1,7,9,6,11,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}