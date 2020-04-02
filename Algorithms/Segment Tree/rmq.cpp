#include <bits/stdc++.h>
using namespace std;

//If the array is static (i.e unchanged after it is instantiated), then using a Segment Tree to solve the RMQ problem is overkill as there
//exists a Dynamic Programming (DP) solution that requires O(n.logn) one-time pre-processing and allows O(1) per Query.

int A[7] = {18, 17, 13, 19, 15, 11, 20};
vector<int> st;
int left(int p) { return p << 1; }
int right(int p) { return (p << 1) + 1; }

void build(int i, int L, int R) {
  if (L == R) 
    st[i] = L;
  else {
    build(left(i), L, (L+R)/2); //controi p/ direita
    build(right(i), ((L+R)/2)+1, R); //constroi p/ esquerda
    int l = st[left(i)], r = st[right(i)];
    st[i] = (A[l] <= A[r]) ? l : r;
  }
}
int RMQ(int p, int L, int R, int i, int j) {
  if (i > R || j < L) //estou fora do intervalo
    return -1;
  if (i <= L && j >= R) //estou dentro do intervalo
    return st[p];
  //estou parcialmente no intervalo
  int l = RMQ(left(p), L, (L+R)/2, i, j), r = RMQ(right(p), ((L + R)/2)+1, R, i, j);

  if (l == -1)
    return r;
  if (r == -1)
    return l;
  return (A[l] <= A[r]) ? l : r;
}

int main() {
  int n = 7;
  st.assign(4*n, 0);
  build(1, 0, n - 1);
  cout << "RMQ(1, 3): " << RMQ(1, 0, n - 1, 1, 3) << '\n';
  cout << "RMQ(4, 6): " << RMQ(1, 0, n - 1, 4, 6) << '\n'; 
  return 0;
}
