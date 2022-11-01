/*
Find the nth fibonacci number
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
	int n, c, a = 0, b = 1, i = 1;
	cin >> n;
	while (i <= n) {
		c = a + b;
		a = b;
		b = c;
		i++;
	}
	cout << a << endl;
	return 0;
}
