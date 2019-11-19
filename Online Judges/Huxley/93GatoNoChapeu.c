#include <stdio.h>

int find_n(int h_f, int qnt, int n, int h, int aux){
	if(h > h_f) return find_n(h_f, qnt, n + 1, 1, 1);
	if(h == h_f) return (aux == qnt) ? n : find_n(h_f, qnt, n + 1, 1, 1);
	if(h < h_f) return find_n(h_f, qnt, n, h * (n + 1), aux * n);
}
void read(){
	int h_f, qnt, fator, count, sum; 
	scanf("%d%d", &h_f, &qnt);
	if(h_f == 0 && qnt == 0) return;
	else{
		int n = find_n(h_f, qnt, 1, 1, 1);
		fator = 1;
		count = 0;
		sum = 0;
		while(h_f > 1){
			sum += h_f * fator;
			count += fator;
			h_f /= (n + 1);
			fator = fator * n;
		}
		sum += qnt;
		printf("%d %d\n", count, sum);
		read();
	}
}
int main(){
	read();
	return 0;
}