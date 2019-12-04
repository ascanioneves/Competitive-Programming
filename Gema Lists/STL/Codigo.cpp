#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  int n;
  cin >> n;
  vector<string> v;
  map<string, int> sufix, prefix, t;
  for(int i = 0; i < n; i++)
  {
    cin >> str;
    v.push_back(str);
    if(!t.count(str))
    {
      t.insert(make_pair(str,1));
    }
    else
    {
      cout << v[i] << endl;
      return 0;
    }
    
    for(int j = 1; j < 10; j++)
    {
      //cout << v[i].substr(0, j) << endl;
      
      if(prefix[v[i].substr(0, j)] >= 1 && sufix[v[i].substr(j, 10 - j)] >= 1)
      {
        cout << v[i] << endl;
        return 0;
      }
    }
    for(int j = 1; j < 10; j++)
    {
      //cout << str.substr(0, j) << " - " << str.substr(j, 10 - j) << endl;
      if(!sufix.count(str.substr(0, j)))
      {
        sufix.insert(make_pair(str.substr(0, j), 1));
      }
      else
      {
        sufix[str.substr(0, j)]++;  
      }
      if(!prefix.count(str.substr(j, 10 - j)))
      {
        prefix.insert(make_pair(str.substr(j, 10 - j), 1));
      }
      else
      {
        prefix[str.substr(j, 10 - j)]++;  
      }
    } 
  }
  //cout << st["aoo"] << end
  cout << "ok\n";
  return 0;
}