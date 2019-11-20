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
    visited.resize(maxN, false);
    adjList[0].push_back(1);
    adjList[0].push_back(2);
    adjList[1].push_back(3);
    adjList[3].push_back(4);
    adjList[4].push_back(6);
    adjList[2].push_back(5);
    adjList[5].push_back(7);
    bfs(0);
    return (0);
}