#include <bits/stdc++.h>
using namespace std;

#define DEBUG if(0)
#define lli long long int
const int INF = 1e9, maxN = 2e5 + 1;

struct Edge
{
  int at, to, cost;
  bool operator<(const Edge &other) const { return cost < other.cost; }
};
vector<Edge> Edges;
vector<bool> mst;
int parent[maxN], n, m;

int root(int u)
{
  return parent[u] == u ? u : parent[u] = root(parent[u]);
}
void merge(int u, int v)
{
  u = root(u), v = root(v);
  if (u == v) return;
  parent[u] = v;
}
void kruskal()
{
  for (int i = 0; i < m; i++)
  {
    if (root(Edges[i].at) == root(Edges[i].to)) continue;
    merge(Edges[i].at, Edges[i].to);
    mst[i] = true;
  }
}
int main()
{
  while (scanf("%d%d", &n, &m) && (n != 0 && m != 0))
  {
    lli tot = 0, ans = 0;
    for (int i = 0; i < maxN; i++) parent[i] = i;
    for (int i = 0; i < m; i++)
    {
      int at, to, cost;
      scanf("%d%d%d", &at, &to, &cost);
      Edges.push_back({at, to, cost});
      tot += cost;
    }
    sort(Edges.begin(), Edges.end());
    mst.assign(m + 1, false);
    kruskal();
    for (int i = 0; i < m; i++)
      if (mst[i]) 
        ans += Edges[i].cost;
    printf("%lld\n", tot - ans); 
    Edges.clear();
  }
  return 0;
}