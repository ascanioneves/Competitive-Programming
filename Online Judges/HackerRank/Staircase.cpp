#include <bits/stdc++.h>
using namespace std;

void print_spaces(int spaces)
{
  if(spaces == 0) return;
  printf(" ");
  print_spaces(spaces-1);
}
int main()
{
  int n;
  scanf("%d", &n);
  int spaces = n - 1;
  while(spaces >= 0)
  {
    print_spaces(spaces);
    for(int i = 0; i < n - spaces; i++)
      printf("#");
    printf("\n");
    spaces--;
  }
  return 0;
}