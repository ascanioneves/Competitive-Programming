#include <stdio.h>
#include <limits.h>

int main(){
	int n, g, i;
	int aux, pontos = 0;
	scanf("%d%d", &n, &g);
	int matriz[n][2];
	for(i = 0; i < n; i++){
		scanf("%d%d", &matriz[i][0], &matriz[i][1]);
	}
	while(g--){
		for(i = 0; i < n; i++){
			if((matriz[i][0] - matriz[i][1]) == 0){
				aux = i;
			}
			else if(matriz[i][0] - matriz[i][1] < 0){
				aux = i;
			}
		}
		matriz[aux][0] += 1;
	}
	for(i = 0; i < n; i++){
		if(matriz[i][0] == matriz[i][1]){
			pontos += 1;
		}
		else if(matriz[i][0] > matriz[i][1]){
			pontos += 3;
		}
	}
	printf("%d\n", pontos);
	return 0;
}