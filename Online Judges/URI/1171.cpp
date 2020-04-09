#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
  int n;
  scanf("%d", &n);
  int cnt[2001];
  set<int> numbers;
  memset(cnt, 0, sizeof(cnt));
  for (int i = 0; i < n; i++)
  {
    int x;
    scanf("%d", &x);
    cnt[x]++;
    numbers.insert(x);
  }
  for (int a : numbers)
    printf("%d aparece %d vez(es)\n", a, cnt[a]);
  return 0;
}