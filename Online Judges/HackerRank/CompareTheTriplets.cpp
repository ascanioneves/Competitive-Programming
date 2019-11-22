#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[3], b[3];
  int aa = 0, bb = 0;
  for(int i = 0; i < 3; i++)
    scanf("%d", &a[i]);
  for(int i = 0; i < 3; i++)
    scanf("%d", &b[i]);
  for(int i = 0; i < 3; i++)
  {
    if(a[i] > b[i])
      aa++;
    else if(b[i] > a[i])
      bb++;
  }
  printf("%d %d\n", aa, bb);
  return 0;
}