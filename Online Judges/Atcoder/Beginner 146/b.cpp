#include <bits/stdc++.h>
using namespace std;

int main()
{
  char alfa[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

  int n;
  string str;
  cin >> n;
  cin >> str;
  for(int i = 0; i < str.size(); i++)
  {
    for(int j = 0; j < 26; j++)
    {
      if(str[i] == alfa[j])
      {
        str[i] = alfa[(j + n) % 26];
        break;
      }
    }  
  }
  cout << str << endl;
  return 0;
}