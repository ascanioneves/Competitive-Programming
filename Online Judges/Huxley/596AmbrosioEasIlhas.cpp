#include <bits/stdc++.h>
using namespace std;

#define DEBUG if(0)
#define lli long long int
typedef pair<int, int> pii;
const int maxN = 1e4 + 1, INF = 1e9;
vector<pii> graph[maxN];
vector<lli> dist;
vector<bool> visited;

void dijkstra(int s)
{
  dist.assign(maxN, INF);
  visited.assign(maxN, false);
  dist[s] = 0;
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  pq.push({0, s});
  while (!pq.empty())
  {
    int u = pq.top().second;
    pq.pop();
    if (visited[u]) continue;
    visited[u] = true;
    for (auto e : graph[u])
    {
      int v = e.second, cost = e.first;
      DEBUG printf("%d %d\n", v, cost);
      if (dist[v] > dist[u] + cost) 
      {
        dist[v] = dist[u] + cost;
        pq.push({dist[v], v});
      }
    }
  }
}
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int vertices, edges;
    scanf("%d%d", &vertices, &edges);
    for (int i = 0; i < edges; i++)
    {
      int at, to;
      scanf("%d%d", &at, &to);
      graph[at].push_back({1, to});
      graph[to].push_back({1, at});
    }
    dijkstra(1);
    DEBUG
      for (int i = 1; i <= vertices; i++)
        printf("%lld ", dist[i]);
    printf("%lld\n", dist[vertices] == INF ? -1 : dist[vertices]);
    for (int i = 0; i < maxN; i++) graph[i].clear();
  }
  return 0;
}
