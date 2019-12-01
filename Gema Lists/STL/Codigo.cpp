#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  int n;
  cin >> n;
  set<string> st;
  vector<string> v;
  for(int i = 0; i < n; i++)
  {
    cin >> str;
    v.push_back(str);
  }
  if(n == 1)
  {
    cout << "ok\n";
    return 0;
  }
  for(int i = 0; i < n; i++)
  {
    for(int j = 1; j < 10; j++)
    {
      st.insert(v[i].substr(0, j) + v[i].substr(j, 10 - j));
    }
  }
  for(int i = 0; i < n; i++)
  {
    int f = 0, s = 0;
    if(st.find(v[i]) != st.end())
    {
      
    }
  }
  cout << "ok\n";
  return 0;
}