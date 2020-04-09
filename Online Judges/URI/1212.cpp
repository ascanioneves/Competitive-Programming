#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	lli n, m;
	while (scanf("%lld%lld", &n, &m))
	{
		if (n == 0 && m == 0)
			break;
		lli carrys = 0, carry = 0; 
		while (n || m)
		{
			if (((n % 10) + (m % 10) + carry) >= 10)
				carrys++, carry = 1;
			else
				carry = 0;
			n /= 10, m /= 10;
		}
		if (!carrys)
			printf("No carry operation.\n");
		else if(carrys == 1)
			printf("1 carry operation.\n");
		else
			printf("%lld carry operations.\n", carrys);
	}	
	return 0;
}