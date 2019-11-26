#include <bits/stdc++.h>
using namespace std;

//This algorithm works when the edges don't have weight or have a unity weight

int dx[8] = {-1,-1,-1,0,1,1,1,0};// vetor de movimento
int dy[8] = {-1,0,1,1,1,0,-1,-1};//

const int maxN = 10;
vector<int> adj[maxN];
vector<int> dist;

void bfs(int u)
{
  for(int i = 0 ; i < n; i++)
    dist[i] = -1;
  queue<int> q;
  q.push(u);
  dist[u] = 0;
  int aux;
  while(!q.empty())
  {
    aux = q.front();
    q.pop();
    for(int i = 0; i < adj[aux].size(); i++)
    {
      if(dist[adj[aux][i]] == -1)
        dist[adj[aux][i]] = dist[aux] + 1;
      q.push(adj[aux][i]);
    }
  }
}
int main()
{
  return 0;
}
