#include <bits/stdc++.h>
using namespace std;

int main()
{
  int m, a, b;
  scanf("%d%d%d", &m, &a, &b);
  printf("%d\n", max({m - a - b, a, b}));
  return 0;
}