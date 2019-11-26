#include <bits/stdc++.h>
using namespace std;

//This algorithm is more general than BFS with unity weigth, because in the real life , for example,
//the distances between cities are not equals. 
typedef pair<int,int> pii;

const int maxN = 1e5;
const int INF = 1e9;

vector<pii> adj[maxN];
vector<int> dist;
vector<bool> visited;

void dijkstra(int u)
{
  dist.assign(maxN,INF);
  visited.assign(maxN,false);
  dist[u] = 0;
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  pq.push({0, u});
  while(!pq.empty())
  {
    int aux = pq.top().second;
    pq.pop();
    if(visited[aux])
      continue;
    visited[aux] = true;
    for(auto e : adj[aux])
    {
      int v = e.first, w = e.second;
      if(dist[v] > dist[aux] + w)
      {
        dist[v] = dist[aux] + w;
        pq.push({dist[v], v});
      }
    }
  }
}

int main() 
{
  adj[0].push_back({1,2});
  adj[0].push_back({2,4});
  adj[1].push_back({0,2});
  adj[1].push_back({3,5});
  adj[2].push_back({0,4});
  adj[2].push_back({3,1});
  adj[2].push_back({4,5});
  adj[3].push_back({1,5});
  adj[3].push_back({2,1});
  adj[3].push_back({4,2});
  adj[4].push_back({2,5});
  adj[4].push_back({3,2});
  dijkstra(0);
  for(int i = 0; i < 5; i++)
  {
    cout << "Menor distância ate " << i << " = " << dist[i] << endl;
  }
  return 0;
}
