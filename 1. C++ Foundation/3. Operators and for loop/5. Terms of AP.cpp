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
	int i = 1, n = 1, x;
	cin >> x;
	while (i <= x) {
		int ans = (3 * n) + 2;
		if (ans % 4 != 0) {
			cout << ans << " ";
			i++;
			n++;
			continue;
		}
		n++;
	}

	return 0;
}
