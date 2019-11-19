#include <bits/stdc++.h>

using namespace std;

int matriz[1000][1000];
int n, m, maximum = 0;

void run(int posI, int posJ, int posJ2) {
	int sum = 0;
	while(posI < n && posJ >= 0 && posJ2 < m && matriz[posI][posJ] == 1 && matriz[posI][posJ2] == 1) {
		for(int j = posJ; j <= posJ2; j++) {
			if(matriz[posI][j] == 0) return;
			sum += matriz[posI][j];
		}
		maximum = max(sum, maximum);
		posI++;
		posJ--;
		posJ2++;
	}
}
int main() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) cin >> matriz[i][j];
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(matriz[i][j] == 1) run(i, j, j);
		}
	}
	cout << maximum << endl;
	return 0;
}