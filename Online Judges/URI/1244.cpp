#include <bits/stdc++.h>
using namespace std;

#define lli long long int

bool myComp(const string &a, const string &b)
{
  return a.size() > b.size();
}
int main()
{
  int n;
  cin >> n;
  getchar();
  while (n >= 0)
  {
    vector<string> ans;
    string str, now = "";
    getline(cin, str);
    if ((int) str.size() == 0)
    {
      n--;
      continue;
    }
    for (int i = 0, end = (int) str.size(); i < end; i++)
    {
      if (str[i] == '\n')
        break;
      if (str[i] == ' ')
      {
        ans.push_back(now);
        now = "";
      }
      else
        now += str[i];
    }
    ans.push_back(now);
    stable_sort(ans.begin(), ans.end(), myComp);
    for (int i = 0, end = ans.size(); i < end; i++)
    {
      if (i < end - 1)
        cout << ans[i] << " ";
      else
        cout << ans[i] << endl;
    }
    n--;
  }
  return 0;
}