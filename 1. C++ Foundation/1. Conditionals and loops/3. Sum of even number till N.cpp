/*
Given a number N, print sum of all even numbers from 1 to N.
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
	int i = 1, sum = 0;
	while (i <= n) {
		if (i % 2 == 0) {
			sum = sum + i;
		}
		i++;
	}
	cout << sum << endl;
	return 0;
}
