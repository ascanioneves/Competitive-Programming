#pragma GCC optimize("O2")

#include <bits/stdc++.h>
using namespace std;

typedef long long int64;
typedef long double ldouble;

const ldouble eps = 1e-7;
const ldouble pi = acos(-1);
const int inf = 1 << 29;

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
    int n;
    cin >> n;
    int64 v[n];
    for(int i = 0; i < n; i++) 
        cin >> v[i];
    sort(v, v + n);
    int64 ans = LLONG_MAX;
    for(int i = 0; i < n - 1; i++)
        ans = min(ans, abs(v[i] - v[i+1]));
    cout << ans << endl; 
    return 0;
}