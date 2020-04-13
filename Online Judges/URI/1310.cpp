#include <bits/stdc++.h>
using namespace std;

#define DEBUG if(0)
#define lli long long int
const int maxN = 2e5 + 1;

//Solução utilizando soma acumulada, pretendo resolver usando programação dinâmica, tive uma ideia porém 
//ainda não sei como encaixar a influência dos dias na modelagem da DP

int main()
{
  int n;
  while (scanf("%d", &n) != EOF)
  {
    int dayCost;
    scanf("%d", &dayCost);
    int cost[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &cost[i]);

    lli sums[n + 1];
    sums[0] = 0;
    for (int i = 0; i < n; i++)
      sums[i + 1] = sums[i] + cost[i];
    int best = INT_MIN;
    for (int i = n; i > 0; i--)
      for (int j = 0; j <= i; j++)
      {
        DEBUG printf("%lld %d %d\n", (sums[i] - sums[j]) - (dayCost * (i - j)), i, j);
        if ((sums[i] - sums[j]) - (dayCost * (i - j)) > best)
          best = (sums[i] - sums[j]) - (dayCost * (i - j));
      }
    printf("%d\n", best);
  }
  return 0;
}