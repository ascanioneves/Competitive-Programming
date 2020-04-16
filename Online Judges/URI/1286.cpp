#include <bits/stdc++.h>
using namespace std;

#define lli long long int
int n;
lli memo[21][31]; //memoização
vector<pair<int, int>> requests;

lli solve(int i, int p)
{
  if (p == 0 || i >= n)
    return 0;
  if (memo[i][p] > -1)
    return memo[i][p];

  if (p - requests[i].second < 0)
    return memo[i + 1][p] = solve(i + 1, p);

  return memo[i][p] = max(requests[i].first + solve(i + 1, p - requests[i].second), solve(i + 1, p));
}
int main()
{
  while (scanf("%d", &n) && n != 0)
  {
    for (int i = 0; i < 21; i++)
      for (int j = 0; j < 31; j++)
        memo[i][j] = -1; 
    requests.clear();
    int p;
    scanf("%d", &p);
    for (int i = 0; i < n; i++)
    {
      int time, pizzas;
      scanf("%d%d", &time, &pizzas);
      requests.push_back({time, pizzas});
    }
    lli ans = solve(0, p);
    printf("%lld min.\n", ans);
  }
  return 0;
}
/*
  max(requests[i].first + solve(i + 1, p - requests[i].first), solve(i + 1, p));
*/