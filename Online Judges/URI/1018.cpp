#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
  int n;
  scanf("%d", &n);
  printf("%d\n", n);
  int now = n, ans;
  if (now >= 100)
    ans = now / 100, now -= ans * 100;
  else
    ans = 0;
  printf("%d nota(s) de R$ 100,00\n", ans);
  if (now >= 50) 
    ans = now / 50, now -= ans * 50;
  else
    ans = 0;
  printf("%d nota(s) de R$ 50,00\n", ans);
  if (now >= 20) 
    ans = now / 20, now -= ans * 20;
  else
    ans = 0;
  printf("%d nota(s) de R$ 20,00\n", ans);
  if (now >= 10) 
    ans = now / 10, now -= ans * 10;
  else
    ans = 0;
  printf("%d nota(s) de R$ 10,00\n", ans);
  if (now >= 5) 
    ans = now / 5, now -= ans * 5;
  else
    ans = 0;
  printf("%d nota(s) de R$ 5,00\n", ans);
  if (now >= 2) 
    ans = now / 2, now -= ans * 2;
  else
    ans = 0;
  printf("%d nota(s) de R$ 2,00\n", ans);
  if (now >= 1) 
    ans = now / 1, now -= ans * 1;
  else
    ans = 0;
  printf("%d nota(s) de R$ 1,00\n", ans);
  return 0;
}