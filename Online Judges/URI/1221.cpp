#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
  int n;
  scanf("%d", &n);
  while (n--)
  {
    lli x;
    scanf("%lld", &x);
    bool ans = true;
    if (x == 0 || x == 1)
      ans = false;
    if (x == 2)
      ans = true;
    else if (x % 2 == 0)
      ans = false;
    for (int i = 3; i * i <= x; i += 2)
      if (x % i == 0)
      {
        ans = false;
        break;
      }
    printf("%s\n", ans ? "Prime" : "Not Prime");
  }
  return 0;
}