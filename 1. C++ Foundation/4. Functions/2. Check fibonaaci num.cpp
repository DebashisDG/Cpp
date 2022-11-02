/*
Given a number N, figure out if it is a member of fibonacci series or not. 
Return true if the number is member of fibonacci series else false.
*/
#include<bits/stdc++.h>
using namespace std;

void init_code() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

bool check_fibo(int n) {
	int c, a = 0, b = 1;
	while (a <= n) {
		if (a == n) {
			return true;
		} else {
			c = a + b;
			a = b;
			b = c;
		}
	}
	return false;
}
int main() {
	init_code();
	int n;
	cin >> n;
	bool ans = check_fibo(n);
	if (ans) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
	return 0;
}
