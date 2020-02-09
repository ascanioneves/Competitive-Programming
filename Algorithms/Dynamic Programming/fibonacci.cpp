#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e3;

long long dp[maxN];

long long fib(int n)
{
  if(n <= 1)
    return n;
  if(dp[n] != 0)
    return dp[n];
  else
  {
    dp[n] = fib(n - 1) + fib(n - 2);
    return dp[n];
  }
}
int main()
{
  memset(dp, 0, sizeof(dp));
  int n;
  scanf("%d", &n);
  printf("%lld\n", fib(n));
  return 0;
}