#include <bits/stdc++.h>

struct connections{
    int l, r;
};
int n, m;
int t[1000];
int solve(connections c[], int l, int r) { return std::min(t[l], t[r]); }
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int sum = 0;
    std::cin >> n >> m;
    connections c[m];
    for(int i = 0; i < n; i++) std::cin >> t[i];
    for(int i = 0; i < m; i++) std::cin >> c[i].l >> c[i].r; 
    for(int i = 0; i < m; i++) {
        int ans = solve(c, c[i].l - 1, c[i].r - 1);
        sum += ans;
    }
    std::cout << sum << std::endl;
    return 0;
}