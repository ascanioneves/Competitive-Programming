#include <bits/stdc++.h>
using namespace std;

#define lli long long int

lli max(int a, int b)
{
  if(a > b)
    return a;
  else
    return b;
}
int main()
{
  int n, ans = 0;
  scanf("%d", &n);
  lli v[n];
  lli x, mx = LLONG_MIN;
  for(int i = 0; i < n; i++)
  {
    scanf("%lld", &v[i]);
    mx = max(mx, v[i]);
  }
  for(int i = 0; i < n; i++)
    ans += (v[i] == mx); 
  printf("%d", ans);
  return 0;
}