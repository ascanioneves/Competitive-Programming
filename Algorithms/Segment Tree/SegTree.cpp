#include <bits/stdc++.h>

using namespace std;
const int MAXN = 112345;

int v[MAXN];
int st[MAXN*4+1];

void build(int l, int r, int i) {
    if(l == r) { //condiçao de parada(só 1 elemento)
        st[i] = v[l];
        return;
    }
    int mid = (l + r) / 2;
    build(l, mid, 2*i); //esquerda
    build(mid + 1, r, (2 * i)+1); //direita
    st[i] = st[2*i] + st[(2*i)+1]; //guardando a soma dos filhos
}
//l e r -> intervalos do nó atual
//ql e qr -> intervalos da query
int query(int i, int l, int r, int ql, int qr) {
    if(l >= ql && r <= qr) return st[i];//o intervalo do nó está totalmente contido na query
    if(l > qr || r < ql) return 0; //o intervalo do nó está totalmente fora da query
    int mid = (l + r) / 2;
    //o intervalo do nó está parcialmente contido na query, então verifique meus filhos
    return query(2*i, l, mid, ql, qr) + query((2*i)+1, mid+1, r, ql, qr);//chamada pra esquerda e direita	
}
//pos -> posição do elemento a ser alterado
//x -> valor a ser alterado
void update(int i, int l, int r, int pos, int x) {
    if(l == r) st[i] = x;
    else {
        int mid = (l+2)/2;
	if(pos <= mid) update(2*i, l, mid, pos, x);
	else update((2*i)+1, mid+1, r, pos, x);
	st[i] = st[2*i] + st[(2*i)+1];
    }
}
int main() {
    int n, ql, qr;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> v[i];
    build(0, n - 1, 1);
    cin >> ql >> qr;
    int ans = query(1, 0, n - 1, ql, qr);
    cout << "A Soma do intervalo [" << ql << ", " << qr << "] eh " << ans << endl;
    return 0;
}