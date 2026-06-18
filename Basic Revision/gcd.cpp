#include <iostream>
using namespace std;

// forward loop approach
// int gcd(int a, int b){
//     int gcd = 1;
//     for(int i = 1;i<min(a,b);i++){
//         if(a%i == 0 && b%i == 0){
//             gcd = i;
//         }
//     }
//     return gcd;
// }

//backward loop approach
// int gcd(int a, int b){
//     for(int i = min(a,b);i>0;i--){
//         if(a%i == 0 && b%i == 0){
//             return i;
//         }
//     }
//     return 1;
// }

// Euclid algorithm
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }else{
            b = b%a;
        }
    }
    if(a == 0){
        return b;
    }
    
    return a;
}

int main() {
    int n1 = 9,n2 =12;
    int g = gcd(n1,n2);
    cout<<"gcd of "<<n1<<" and "<<n2<<" is : "<<gcd(n1,n2)<<endl;
    return 0;
}