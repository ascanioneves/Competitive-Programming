#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
  int a1, a2, at, d;
  double ans, prob;
  while (scanf("%d%d%d%d", &a1, &a2, &at, &d))
  {
    if (a1 == 0 && a2 == 0 && at == 0 && d == 0)
      break;
    int aux = a1;
    a1 = 0;
    while (aux > 0)
      aux -= d, a1++;
    aux = a2;
    a2 = 0;
    while (aux > 0)
      aux -= d, a2++;
    if (at == 3)
      ans = (double) a1 / (double) (a1 + a2);
    else
      prob = at / (double) 6, prob = (1 - prob) / prob, ans = (1.0 - pow(prob, a1)) / (1.0 - pow(prob, a1 + a2));
    printf("%.1lf\n", ans * 100);
  }
  return 0;
}