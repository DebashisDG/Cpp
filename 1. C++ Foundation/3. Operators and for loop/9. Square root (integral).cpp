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
	for (int i = 2; i <= n / 2; i++) {
		if (i * i == n) {
			cout << i << endl;
			break;
		} else if (i * i > n) {
			cout << i - 1 << endl;
			break;
		}
	}

	return 0;
}
