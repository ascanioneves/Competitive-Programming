#include <bits/stdc++.h>
using namespace std;

/* Non DP implementation -> Complexity : O(2^n) */
int lcs_naive(string s, string t, int n, int m)
{
  if(n == 0 || m == 0)
    return 0;
  if(s[n - 1] == t[m - 1])
    return 1 + lcs_naive(s, t, n - 1, m - 1);
  else
    return max(lcs_naive(s, t, n - 1, m), lcs_naive(s, t, n, m - 1));
}

/* DP implementation -> Complexity : O(n.m)*/
int lcs(string s, string t, int n, int m)
{
  int dp[n + 1][m + 1];
  
  for(int i = 0; i <= n; i++)
  {
    for(int j = 0; j <= m; j++)
    {
      if(i == 0 || j == 0)
        dp[i][j] = 0;
      else if(s[i - 1] == t[j - 1])
        dp[i][j] = dp[i - 1][j - 1] + 1;
      else
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }
  }
  return dp[n][m];
}
int main()
{
  string s, t;
  cin >> s >> t;
  int ans = lcs(s, t, s.size(), t.size());
  cout << ans << endl;
  return 0;
}