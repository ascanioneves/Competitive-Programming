#include <stdio.h>

void read_array(int array[], int n, int i)
{
    if(i < n)
    {
        scanf("%d", &array[i]);
        read_array(array, n, i + 1);  
    }
}
void insert_zero(int visit[], int n, int i)
{
    if(i < n)
    {
        visit[i] = 0;
        insert_zero(visit, n, i + 1);  
    }
}
int get_next(int visit[], int n, int i)
{
    if(i < n)
    {
        if(visit[i] == 0)
            return i;
        else
            return get_next(visit, n, i + 1);
    }
    else
        return 0;
}
void run(int array[], int visit[], int n, int i, int aux, int first, int count)
{
    if(aux == n)
    {
        printf("%d\n", count);
        return;
    }
    else
    {
        visit[i] = 1;
        i = array[i];
        if(i == first)
        {
            count += 1;
            first = get_next(visit, n, 0);
            run(array, visit, n, first, aux + 1, first, count);
        }
        else
            run(array, visit, n, i, aux + 1, first, count);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    int visit[n];

    read_array(array, n, 0);
    insert_zero(visit, n, 0);
    run(array, visit, n, 0, 0, 0, 0);
    return 0;
}
