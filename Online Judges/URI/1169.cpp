#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    unsigned long long int ans = (1LL * pow(2, x)) - 1;
    ans /= 12;
    cout << ans / 1000 << " kg\n";
  }
  return 0;
}
