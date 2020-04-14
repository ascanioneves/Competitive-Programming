#include <bits/stdc++.h>
using namespace std;

int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    long long ans = 0;
    for (int i = 0, n = (int) s.size(); i < n; i++) {
      ans += leds[s[i] - '0'];
    }
    cout << ans << " leds\n";
  }
  return 0;
}
