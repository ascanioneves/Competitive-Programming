#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define lli long long int

int main()
{
  vector<int> odd, even;
  int n;
  scanf("%d", &n);
  while (n--)
  {
    int x;
    scanf("%d", &x);
    if (x & 1)
      odd.push_back(x);
    else
      even.push_back(x);
  }
  sort(all(even));
  sort(all(odd));
  reverse(all(odd));
  for (int e : even)
    printf("%d\n", e);
  for (int o : odd)
    printf("%d\n", o);
  return 0;
}