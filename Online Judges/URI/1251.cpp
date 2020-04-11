#include <bits/stdc++.h>
using namespace std;

#define lli long long int

//Se a frequencia for igual devemos dar prioridade ao que tem o maior indice na tabela ASCII
bool myComp(const pair<int, int> &a, const pair<int, int> &b)
{
  if (a.second == b.second)
    return a.first > b.first;
  else
    return a.second < b.second;
}
int main()
{
  char str[1001];
  bool can = false;
  while (scanf(" %s", str) != EOF)
  {
    if (can)
      printf("\n");
    can = true;
    vector<pair<int, int>> cnt(256);
    for (int i = 0; i < 256; i++)
    {
      cnt[i].first = i;
      cnt[i].second = 0;
    }
    for (int i = 0, end = strlen(str); i < end; i++)
    {
      int wtf = str[i];
      cnt[wtf].second++;
    }
    sort(cnt.begin(), cnt.end(), myComp);  
    for (int i = 0; i < 256; i++)
      if (cnt[i].second > 0)
        printf("%d %d\n", cnt[i].first, cnt[i].second);
  }
  return 0;
}