#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 1;
set<int> vertex;
vector<int> graph[maxN];
int parent[maxN], vertices, edges;

//Quick Union / merge
int root(int u)
{
  return parent[u] == -1 ? u : root(parent[u]);
}

void merge(int u, int v)
{
  int uParent = root(u);
  int vParent = root(v);

  parent[uParent] = vParent;
}

bool has_cycle()
{
  for(auto u : vertex)
  {
    for(auto v : graph[u])
    {
      int x = root(u);
      int y = root(v);
      if(x == y)
        return true;
      merge(x, y);
    }
  }
  return false;
}

int main()
{
  memset(parent, -1, sizeof(parent));
  scanf("%d%d", &edges, &vertices);
  for(int i = 0; i < edges; i++)
  {
    int at, to;
    scanf("%d%d", &at, &to);
    graph[at].push_back(to);
    vertex.insert(at);
    vertex.insert(to);
  }
  printf("%s\n", has_cycle() ? "Yes" : "No");
  return 0;
}