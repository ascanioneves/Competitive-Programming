#include <bits/stdc++.h>
using namespace std;

bool can(char c1, char c2) {
	if(c1 == 'C' && c2 == 'F') return true;
	if(c1 == 'F' && c2 == 'C') return true;
	if(c1 == 'B' && c2 == 'S') return true;
	if(c1 == 'S' && c2 == 'B') return true;
	return false;
}
int connections(string str) {
	int ans = 0;
	stack<char> stk;
	for(int i = 0; i < (int)str.size(); i++) {
		if(stk.empty()) stk.push(str[i]);
		else if(can(str[i], stk.top())) {
			ans++;
			stk.pop();
		} else {
			stk.push(str[i]);
		}
	}
	return ans;
}
void read() {
	string str;
	cin >> str;
	if(str == "Z") return;
	else {
		int ans = connections(str);
		cout << ans << endl;
		read();
	}
}
int main() {
	read();
}