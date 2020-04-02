#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

class UnionFind {
  private:
    vi parent, rank;
  public:
    UnionFind(int n) {
      rank.assign(n, 0);
      parent.assign(n, 0);
      for (int i = 0; i < n; i++)
        parent[i] = i;
    }
    int find(int u) {
      return parent[u] == u ? u : parent[u] = find(parent[u]);
    }
    bool isSameSet(int u, int v) {
      return find(u) == find(v);
    }
    void merge(int u, int v) {
      if (!isSameSet(u, v)) {
        int x = find(u), y = find(v);
        if (rank[x] > rank[y])
          parent[y] = x;
        else {
          parent[x] = y;
          if (rank[x] == rank[y])
            rank[y]++;
        }
      }
    }
};

int main() {

  return 0;
}
