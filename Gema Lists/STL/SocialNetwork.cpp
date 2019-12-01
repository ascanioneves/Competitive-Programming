#include <bits/stdc++.h>
using namespace std;

deque<int> v;
set<int> s;

int main()
{
  int n, k;
  long long x;
  scanf("%d%d", &n, &k);
  for(int i = 0; i < n; i++)
  {
    scanf("%lld", &x);
    if(s.find(x) == s.end())
    {
      if(v.size() == k)
      {
        s.erase(v.back());
        v.pop_back();
      }
      v.push_front(x);
      s.insert(x);
    }
  }
  printf("%lu\n", v.size());
  for(long long i = 0, end = v.size(); i < end; i++)
    printf("%d%c", v[i], (i < end - 1) ? ' ' : '\n');
  return 0;
}