#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main() 
{
    int n;
    lli sum_p = 0, sum_s = 0;
    cin >> n;
    int matrix[n][n];
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < n; j++)
            cin >> matrix[i][j];
    for(int i = 0, j = 0; i < n; i++, j++) 
        sum_p += matrix[i][j];
    for(int i = 0, j = n - 1; i < n; i++, j--) 
        sum_s += matrix[i][j];
    cout << abs(sum_p - sum_s) << endl;
    return 0;
}