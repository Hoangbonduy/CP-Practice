//https://luyencode.net/problem/SANGNT
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n >= 2) {
        vector <bool> isPrime(n+1,true);
        isPrime[0] = false;
        isPrime[1] = false;
        for (int i = 2;i*i<=n;i++) {
            if (isPrime[i] == true) {
                for (int j = i*i;j<=n;j+=i) {
                    isPrime[j] = false;
                }
            }
        }
        for (int i = 2;i<=n;i++) {
            if (isPrime[i]) cout << i <<  " ";
        }
    }
}