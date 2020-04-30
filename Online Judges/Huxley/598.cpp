#include <bits/stdc++.h>
using namespace std;

#define lli long long int
const int maxN = 1e4 + 1, mod = 100000007;
int cnt[256];
lli fat[maxN];
char s[maxN];

lli modPow(lli x, lli y)
{
  lli ans = 1;
  while (y)
  {
    if (y & 1LL) ans = (ans * x) % mod;
    x = (x * x) % mod, y >>= 1LL;
  }
  return ans;
}
int main()
{
  fat[0] = 1, fat[1] = 1;
  for (int i = 2; i < maxN; i++)
    fat[i] = (i * (fat[i - 1] % mod)) % mod;
  while (scanf(" %s", s) != EOF)
  {
    if (!strcmp(s, "0")) break;
    int len = strlen(s);
    for (int i = 0; i < 256; i++)
      cnt[i] = 0;
    for (int i = 0; i < len; i++)
      cnt[s[i]]++;
    lli qnt = 1;
    for (int i = 0; i < len; i++)
      if (cnt[s[i]] >= 2)
      {
        qnt = ((qnt % mod) * (fat[cnt[s[i]]] % mod)) % mod;
        cnt[s[i]] = 0;
      }
    printf("%lld\n", 1LL * (((fat[len] % mod) * (modPow(qnt, mod - 2) % mod)) % mod));
  }
  return 0;
}
