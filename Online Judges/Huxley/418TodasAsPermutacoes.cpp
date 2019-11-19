#include <bits/stdc++.h>

using namespace std;

class Solver {
public: 
    Solver() {
        vector<int> v;
        int n, k;
        cin >> n;
        for(int i = 0; i < n; i++) v.push_back(i+1);
        for(int i = 0; i < v.size(); i++) cout << v[i];
        cout << '\n';
        while(next_permutation(v.begin(), v.end())) {
            for(int i = 0; i < v.size(); i++) cout << v[i];
            cout << "\n";
        }
    }  
};
int main() {
    Solver solver;
    return 0;
}