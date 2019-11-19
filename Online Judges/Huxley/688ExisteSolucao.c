#include <stdio.h>

int solve(int a, int b, int c, int x, int y, int count)
{
	if(x == c*2)
	{
		return count;
	}
	else
	{
		if((a * x) + (b * y) == c)
		{
			count += 1;
		}
		return solve(a, b, c, x + 1, y, count);
	}
}
int loop(int a, int b, int c, int i, int ans, int x, int y)
{
	if(i == c*2)
	{
		return ans;
	}
	else
	{
		ans = ans + solve(a, b, c, x, y, 0);
		loop(a, b, c, i + 1, ans, x, y + 1);
	}
}
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	int res = loop(a, b, c, 0, 0, -c, 0);

	if(res > 0)
	{
		printf("S\n");
	}
	else
	{
		printf("N\n");
	}

	return 0;
}