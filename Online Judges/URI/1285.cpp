#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int cnt[10];

int main()
{
  int n, m;
  while (scanf("%d%d", &n, &m) != EOF)
  {
    int ans = 0;
    for (int i = n; i <= m; i++)
    {
      memset(cnt, 0, sizeof(cnt));
      int now = i;
      while (now)
        cnt[now % 10]++, now /= 10;
      bool can = true;
      for (int k = 0; k < 10; k++)
        if (cnt[k] > 1)
          can = false;
      ans += can;
    }
    printf("%d\n", ans);
  }
  return 0;
}