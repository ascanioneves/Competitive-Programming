#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> prime;
    prime.resize(n + 1, true);
    for(int i = 2, end = sqrt(n); i <= end; i++) {
        if(prime[i]) {
            //eliminando multiplos
            for(int j = i*i, k = 0; j <= n; j += k*i, k++) {
                prime[j] = false;
            }
        }
    }
    for(int i = 2; i < prime.size(); i++) {
        if(prime[i]) cout << i << endl;
    }
    return (0);
}