#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, neg = 0, pos = 0, z = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        if(arr[i] < 0) neg++;
        else if(arr[i] > 0) pos++;
        else z++;
    }
    printf("%.6lf\n%.6lf\n%.6lf\n", pos / (double)n, neg / (double)n, z / (double)n);
    return 0;
}