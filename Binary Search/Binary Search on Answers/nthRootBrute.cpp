#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int nthRoot(int n, int m) {
        for (int i = 1; i <= m; i++) {
            long long power = pow(i, n);

            if (power == m) return i;

            if (power > m) break;
        }

        return -1;
    }

int main() {
    int n = 3;
    int m = 1;
    cout<<nthRoot(n,m);
    return 0;
}