#include <stdio.h>
#include <limits.h>

void swap_min(int *c, int *min){
	if(*c < *min) *min = *c;
	return;
}
int main(){
	int n, j, c = 0, min = INT_MAX;
	scanf("%d", &n);
	int matriz[2][n];
	for(j = 0; j < n; j++){
		scanf("%d", &matriz[0][j]);
		matriz[0][j] = (matriz[0][j] + 1) % 2;//transformando 0 em 1 e 1 em 0
	}
	for(j = 0; j < n; j++){
		scanf("%d", &matriz[1][j]);
		matriz[1][j] = (matriz[1][j] + 1) % 2;
	}
	//esquerda
	for(j = 0; j < n; j++) c += matriz[0][j];
	swap_min(&c, &min);
	c++;//trocando de lado
	for(j = 0; j < n; j++){
		c -= matriz[0][j];//
		c += matriz[1][j];//"percorrendo" todas as possibilidades
		swap_min(&c, &min);
	}
	//direita
	c = 0;
	for(j = 0; j < n; j++) c += matriz[1][j];
	swap_min(&c, &min);
	c++;
	for(j = 0; j < n; j++){
		c -= matriz[1][j];
		c += matriz[0][j];
		swap_min(&c, &min);
	}
	printf("%d\n", min);
	return 0;
}