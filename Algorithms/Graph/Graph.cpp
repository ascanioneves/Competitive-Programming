#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5+1;

vector<int> adjList[maxN];

int main() {
    int x, y, nodes, edges;
    cin >> nodes;
    cin >> edges;
    for(int i = 0; i < edges; i++) {
        cin >> x >> y;
        adjList[x].push_back(y); //insert Y in X adjacency list
    }
    for(int i = 1; i <= nodes; i++) {
        cout << "Adjacency list of node : " << i << endl;
        for(int j = 0; j < adjList[i].size(); j++) {
            if(j == adjList[i].size() - 1) {
                    cout << adjList[i][j] << endl;
            }
            else {
                cout << adjList[i][j] << " --> ";
            }
        }

    }
    return (0);
}