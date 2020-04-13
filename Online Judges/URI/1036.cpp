#include <bits/stdc++.h>
using namespace std;

int main()
{
  double a, b, c;
  scanf("%lf%lf%lf", &a, &b, &c);
  double delta = (b * b) - (4 * a * c);
  if (delta < 0 || a == 0)
    printf("Impossivel calcular\n");
  else
  {
    double x1 = (-b + sqrt(delta)) / (2.0 * a), x2 = (-b - sqrt(delta)) / (2.0 * a);
    printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
  }
  return 0;
}