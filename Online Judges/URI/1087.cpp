#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  //Guloso: A resposta só pode ser 0, 1 ou 2, onde 0 é quando já estamos no destino, 1 quando o destino consegue
  //ser atingido andando somente em uma das 8 direções possíveis, e 2 caso contrário.
  int i, j, ii, jj;
  while (scanf("%d%d%d%d", &i, &j, &ii, &jj) != EOF )
  { 
    int ans;
    if (i == 0 && j == 0 && ii == 0 && jj == 0)
      break;
    if (i == ii && j == jj)
      ans = 0;
    else if ((abs(ii - i) == abs(jj - j)) || i == ii || j == jj)
      ans = 1;
    else
      ans = 2;
    printf("%d\n", ans);
  }
  return 0;
}