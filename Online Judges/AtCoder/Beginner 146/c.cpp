#include <bits/stdc++.h>
using namespace std;

#define lli long long int

lli digits(int n)
{
  return (n <= 0) ? 0 : 1 + digits(n/10);
}
lli upper(lli n, lli a, lli b) 
{
  lli mid, start = 0, end = 1e9, ans = -1, ans2;
  while(start <= end) 
  {
    mid = (start + end)/2;
    lli calc = (a * mid) + (b * digits(mid)); 
    if(calc == n) 
    {
      ans = mid;
      start = mid + 1;
      return ans;
    }
    else if(calc < n) 
    {
      start = mid + 1;
      ans2 = mid;
    }
    else 
      end = mid - 1;
  }
  return (ans == -1) ? ans2 : ans;
}
int main()
{
  lli a, b, x;
  cin >> a >> b >> x;
  lli ans = upper(x,a ,b);
  cout << ans << endl;
  return 0;
}
