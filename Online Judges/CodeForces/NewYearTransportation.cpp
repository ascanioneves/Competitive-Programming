#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    for(int i = 0; i < n - 1; i++) 
        cin >> arr[i];
    for(int i = 0; i < n; i += arr[i])
    {
        if(i == t - 1)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}