#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
  char str[1001];
  while (scanf(" %s", str) != EOF)
  {
    bool correct = true;
    int open = 0;
    for (int i = 0, end = strlen(str); i < end; i++)
    {
      if (str[i] == ')' && open == 0)
      {
        correct = false;
        break;
      }
      else if (str[i] == ')' && open)
        open--;
      else if (str[i] == '(')
        open++;
    }
    if (open)
      correct = false;
    printf("%s\n", correct ? "correct" : "incorrect");
  }
  return 0;
}