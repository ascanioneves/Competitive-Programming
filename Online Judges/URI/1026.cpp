#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  unsigned int a, b;
  while (scanf("%u%u", &a, &b) != EOF)
  {
    unsigned int ans = a ^ b;
    printf("%u\n", ans);
  }
}