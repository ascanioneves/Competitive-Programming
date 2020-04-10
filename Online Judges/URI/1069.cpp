#include <bits/stdc++.h>
using namespace std;
#define lli long long int;

//A implementação ideal seria com pilha, mas no caso fiz uma pilha lógica.

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    char str[1001];
    scanf(" %s", str);
    int open = 0, ans = 0;
    for (int i = 0, end = strlen(str); i < end; i++) 
    {
      if (str[i] == '<')
        open++;
      if (str[i] == '>' && open > 0)
        ans++, open--;
    }
    printf("%d\n", ans);
  }
  return 0;
}