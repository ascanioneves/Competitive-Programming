#include <bits/stdc++.h>

#define MAXN 100
int matriz[MAXN][MAXN];
int maximum = 0, n;

bool is_biggest(int sum) { return (sum > maximum) ? true : false; }

void run(int posI, int posJ) {
	int h = 0, sum;
	int aux_i = posI, aux_j = posJ;
	while(posJ < n && matriz[posI][posJ] == 1) {
		h++;
		sum = 0;
		for(int i = aux_i; i < aux_i + h && i < n; i++) {
			for(int j = aux_j; j < aux_j + h && j < n; j++) sum += matriz[i][j];
		}
		if(sum == h * h && is_biggest(sum)) maximum = sum;
		posJ++;
	}
}
int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cin >> n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) std::cin >> matriz[i][j];
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(matriz[i][j] == 1) run(i, j);		
		}
	}
 	std::cout << maximum << std::endl;
	return 0;
}