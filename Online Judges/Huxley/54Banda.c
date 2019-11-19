#include <stdio.h>

typedef struct band{
	int c[100];
}band;
void read(){
	int n, m, x, y, z, maior = 0, m_a = 1, m_b = 2, m_c = 3;
	int i, j, k;
	scanf("%d%d", &n, &m);
	band musicos[n];
	if(n == 0 && m == 0){
		return;
	}
	else{
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				musicos[i].c[j] = 0;
			}
		}
		for(i = 0; i < m; i++){
			scanf("%d%d%d", &x, &y, &z);
			musicos[x - 1].c[y - 1] = z;
			musicos[y - 1].c[x - 1] = z;
		}
		for(i = 0; i < n; i++){
			for(j = i + 1; j < n; j++){
				for(k = j + 1; k < n; k++){
					int soma = musicos[i].c[j] + musicos[j].c[k] + musicos[k].c[i];
					if(soma > maior){
						maior = soma;
						m_a = i + 1;
						m_b = j + 1;
						m_c = k + 1;
					}
				}
			}
		}
		printf("%d %d %d\n", m_a, m_b, m_c);
		read();
	}
}
int main(){
	read();
	return 0;
}