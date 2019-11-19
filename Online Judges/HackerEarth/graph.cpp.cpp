#include <bits/stdc++.h>
using namespace std;

const int maxN = 1000;

vector<int> adjList[maxN];

int main() {
    int n, m, x, y;
    cin >> n;
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> x >> y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);   
    }
    int q;
    cin >> q;
    while(q--) {
        bool can = true;
        cin >> x >> y;
        for(int j = 0; j < adjList[x].size(); j++) {
            if(adjList[x][j] == y) {
                cout << "YES\n";
                can = false;
                break;
            }
        }
        if(can) cout << "NO\n";
    }
    return (0);
}