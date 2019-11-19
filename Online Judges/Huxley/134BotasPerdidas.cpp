#include <bits/stdc++.h>

using namespace std;

int n;

struct foot {
 int value;
 char side;
};
void brute_force(foot f[], int ans) {
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(f[i].value != -1 && f[j].value != -1) {
				if(f[i].value == f[j].value && f[i].side != f[j].side) {
					ans += 1;
					f[i].value = -1;
					f[j].value = -1;
				}
			}
		}
	}
	cout << ans << endl;
}
void read() {
	cin >> n;
	if(n != -1) {
		foot f[n];
		for(int i = 0; i < n; i++) cin >> f[i].value >> f[i].side;
		brute_force(f, 0);
		read();
	}
}
int main() {
	read();
	return 0;
}