#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    lli v[5], sum = 0;
    for(int i = 0; i < 5; i++) 
    {
        cin >> v[i];
        sum += v[i];
    }
    lli mx = LLONG_MIN, mn = LLONG_MAX;
    for(int i = 0; i < 5; i++) {
        if(sum - v[i] > mx) mx = sum - v[i];
        if(sum - v[i] < mn) mn = sum - v[i];
    }
    cout << mn << " " << mx << endl;
    return 0;
}