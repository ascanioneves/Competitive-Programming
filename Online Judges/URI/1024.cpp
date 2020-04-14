#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    string s;
    getline(cin, s);
    for (int i = 0, end = (int) s.size(); i < end; i++) {
      if (isalpha(s[i])) {
	int pos = s[i];
	pos = pos + 3;
	s[i] = (char) pos;
      }
    }  
    reverse(s.begin(), s.end());
    for (int i = s.size() / 2, end = (int) s.size(); i < end; i++) {
      int pos = s[i];
      pos = pos - 1;
      s[i] = (char) pos;
    }
    cout << s << '\n';
  }
  return 0;
}
