#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5;

vector<int> adjList[maxN];
vector<bool> visited;

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        if(visited[v]) 
            continue;
        visited[v] = true;
        cout << v << endl;
        for(auto e : adjList[v]) 
        {
            if(!visited[e])
                q.push(e);
        }
    }
}
int main()
{
    int nodes, source, x, y;
    cin >> nodes >> source;
    visited.resize(maxN, false);
    while(cin >> x >> y)
        adjList[x].push_back(y);
    for(int i = 0; i < nodes; i++)
        reverse(adjList[i].begin(), adjList[i].end());
    bfs(source);
    return (0);
}