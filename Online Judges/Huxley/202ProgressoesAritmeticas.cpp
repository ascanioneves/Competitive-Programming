#include <bits/stdc++.h>

using namespace std;

int solve(int v[], int n) {
    int count = 1;
    int r = v[1] - v[0];
    for(int i = 1; i < n - 1; i++) {
        if(v[i + 1] - v[i] != r) {
            count += 1;
            r = v[i + 2] - v[i + 1];
        }
    }
    return count;
}
int main(){
    int n, r, flag = 0;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    r = v[1] - v[0];
    for(int i = 1; i < n - 1; i++){
        if(v[i + 1] - v[i] != r){
            flag = 1;
            break;
        }
    }
    if(flag) {
        int ans = solve(v, n);
        cout << ans << endl;
    }
    else {
        cout << "1" << endl;
    }
    return 0;
}