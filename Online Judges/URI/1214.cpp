#include <bits/stdc++.h>
using namespace std;
#define lli long long int

#define DEBUG if(0)

int main()
{
  int t; scanf("%d", &t);
  while (t--)
  {
    int n; scanf("%d", &n);
    lli sum = 0;
    int v[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &v[i]);
      sum += v[i];
    }
    double m = sum / (double) n;
    DEBUG printf("%lf\n", m);
    int qnt = 0;
    for (int i = 0; i < n; i++)
      if (v[i] > m)
        qnt++;
    printf("%.3lf%%\n", (qnt / (double) n) * 100.0);
  }
  return 0;
}