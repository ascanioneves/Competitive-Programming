#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5;
vector<int> adjList[maxN];
vector<bool> visited;

void dfs(int u)
{
    visited[u] = true;
    for(auto v : adjList[u]) 
    {
        if(!visited[v]) 
            dfs(v);
    }
    cout << u << endl;
}
int main()
{
    visited.assign(maxN, false);
    int nodes, source, x, y;
    cin >> nodes >> source;
    while(cin >> x >> y)
        adjList[x].push_back(y);
    for(int i = 0; i < n; i++) 
        reverse(adjList[i].begin(), adjList[i].end());
    dfs(source);
    return (0);
}