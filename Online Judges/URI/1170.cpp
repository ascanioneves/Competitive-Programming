#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    double n;
    scanf("%lf", &n);
    int ans = ceil(log2(n));
    printf("%d dias\n", ans);
  }
  return 0;
}