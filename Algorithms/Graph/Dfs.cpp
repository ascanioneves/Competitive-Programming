#include <bits/stdc++.h>
using namespace std;

const int maxN = 10;
vector<int> adjList[maxN];
vector<bool> visited;

void dfs(int u)
{
    visited[u] = true;
    cout << u << ' ';
    for(auto v : adjList[u]) 
    {
        if(!visited[v]) 
            dfs(v);
    }
}
int main() 
{
    visited.resize(maxN, false);
    adjList[0].push_back(1);
    adjList[0].push_back(2);
    adjList[1].push_back(3);
    adjList[3].push_back(4);
    adjList[4].push_back(6);
    adjList[2].push_back(5);
    adjList[5].push_back(7);
    dfs(0);
    return (0);
}