#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
  int n;
  lli k, ans = 0;
  scanf("%d", &n);
  while(n--)
  {
    scanf("%lld", &k);
    ans += k;
  }
  printf("%lld\n", ans);
  return 0;
}