#include <bits/stdc++.h>
using namespace std;

#define DEBUG if(0)
#define lli long long int
const int maxN = 1e3;
vector<int> graph[maxN];
vector<bool> visited;

struct Point
{
  int x, y;
};
vector<Point> Points;

double distance(Point a, Point b)
{
  return sqrt(((a.x - b.x) * (a.x - b.x)) + ((a.y - b.y) * (a.y - b.y)));
}
void dfs(int u)
{
  visited[u] = true;
  for (auto v : graph[u])
    if (!visited[v])
      dfs(v);
}
//verificar se o grafo � conexo
int main()
{
  int n, d;
  scanf("%d%d", &n, &d);
  vector<pair<int, int>> coordinate;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    scanf("%d%d", &x, &y);
    Points.push_back({x, y});
  }
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (i != j)
        if (distance(Points[i], Points[j]) <= d)
          graph[i].push_back(j), graph[j].push_back(i);
  visited.resize(n, false);
  dfs(0);
  bool conected = true;
  for (int i = 0; i < n; i++)
    if (!visited[i])
    {
      conected = false;
      break;
    }
  printf("%s\n", conected ? "S" : "N");
  return 0;
}