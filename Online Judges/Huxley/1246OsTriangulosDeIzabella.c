#include <stdio.h>

void add(long long int n, long long int l, long long int i, long long int sum)
{
    if(i == l)
    {
        printf("%lld\n", sum);
        return;
    }
    else
    {
        sum = sum + n;
        add(n+1, l, i+1, sum);   
    }
    
}
void first(long long int l, long long int sum, long long int i, long long int k)
{
    if(i == l)
    {
        add(sum, l, 0, 0);
        return;
    }
    else
    {
        sum = sum + k;
        first(l, sum, i+1, k+1);
    }
    
}
void read(long long int n, long long int i)
{
    long long int l;
    if(i == n)
    {
        return;
    }
    else
    {
        scanf("%lld", &l);
        first(l, 1, 0, 0);
        read(n, i+1);   
    }
    
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    read(n, 0);

    return 0;
}