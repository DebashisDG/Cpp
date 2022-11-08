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
	int n, base = 1, dec = 0;
	cin >> n;
	while (n != 0) {
		int rem = n % 10;
		dec = dec + rem * base;
		base = base * 2;
		n = n / 10;
	}
	cout << dec << endl;
	return 0;
}
