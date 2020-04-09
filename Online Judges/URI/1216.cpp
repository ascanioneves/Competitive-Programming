#include <bits/stdc++.h>
using namespace std;

int main()
{
  double sum = 0.0;
  int dist, at = 0;
  char s[100];
  while (true)
  {
    if(scanf(" %[^\n]\n%d", s, &dist) == EOF)
      break;
    sum += dist;
    at++;
  }
  printf("%.1lf\n", sum / (double) at);
  return 0;
}