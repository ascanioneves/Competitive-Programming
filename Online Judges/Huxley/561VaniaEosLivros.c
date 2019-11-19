#include <stdio.h>
#include <math.h>

void loop(long int n, int d, long int sum, int i)
{
    if(n/10 == 0)
    {
        if(i == 0)
        {
            if(n <= 9)
            {
                printf("%ld\n", n);
            }   
        }
        else
        {
            sum = sum + 9;
            printf("%ld\n", sum);
        }
        return;
    }
    else
    {
        sum = sum + ((n-(pow(10,d-1)-1))*d);
        loop(pow(10,d-1)-1 , d-1, sum, i+1);        
    }
    
}
int dig(int n, int d)
{
    if((n / 10) == 0)
    {
        return d;
    }
    else
    {
        d++;
        dig(n/10, d);    
    }
     
}
int main()
{
    long int n;
    scanf("%ld", &n);
    int d = dig(n, 1);
    loop(n, d, 0, 0);
    return 0;
}