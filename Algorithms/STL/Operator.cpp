#include <bits/stdc++.h>
using namespace std;

struct MyPair
{
  int a, b;
  //retorna 1 se for menor, caso empate no a, o desempate é no b
  bool operator<(const MyPair &other) const{ return a < other.a || (a == other.a && b < other.b); }
};

struct Comp
{
  int a, b;
  int operator<(const Comp &other) const{ return min(a + b, other.a + other.b); }
};

int main()
{
  MyPair x, y;
  x = {1, 2};
  y = {3, 4};
  bool ans = x < y;
  cout << ans << endl;
  // <----------------> //
  Comp s, t;
  s = {1, 2};
  t = {2, 3};
  int mn = s < t;
  cout << mn << endl;
  return 0;
}