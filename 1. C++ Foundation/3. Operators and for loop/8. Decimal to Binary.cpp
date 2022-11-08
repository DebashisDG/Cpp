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
	int n, base = 1, binary = 0;
	cin >> n;
	while (n != 0) {
		int rem = n % 2;
		binary = binary + rem * base;
		base = base * 10;
		n = n / 2;
	}
	cout << binary << endl;
	return 0;
}
