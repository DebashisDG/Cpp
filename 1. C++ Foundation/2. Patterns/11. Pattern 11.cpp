/*
ABCD
ABCD
ABCD
ABCD
*/
#include<bits/stdc++.h>
using namespace std;

void init_code() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

int main() {
	init_code();
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		int j = 1;
		while (j <= n) {
			char c = 'A' + j - 1;
			cout << c;
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}
