#include <stdio.h>

int sort(int array[], int n, int max, int aux, int count)
{
	if(n == 1)
		return count;
	else
	{
	    int i;
		for(i = 0; i < n; i++)
		{
			if(array[i] > max)
			{
				max = array[i];
				aux = i;
			}
		}
		if(aux != n - 1)
		{
			int aux2 = array[n - 1];
			array[n - 1] = array[aux];
			array[aux] = aux2;
			count += 1;
		}
		sort(array, n - 1, -2147483648, 0, count);
	}
}
int main()
{
	int l, c;
	int i, j;
	scanf("%d%d", &l, &c);
	int matrix[l][c];
	int colunas[c];
	int linhas[l];
	for(i = 0; i < l; i++)
	{
	    for(j = 0; j < c; j++)
		    scanf("%d", &matrix[i][j]);   
	}
	for(j = 0; j < c; j++)
		colunas[j] = matrix[0][j];
	for(i = 0; i < c; i++)
		linhas[i] = matrix[i][0];
	printf("%d\n", sort(colunas, c, -2147483648, 0, 0) + sort(linhas, l, -2147483648, 0, 0));
	return 0;
}