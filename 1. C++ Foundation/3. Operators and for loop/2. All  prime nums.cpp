/*
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.

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
	int n, i = 2;
	cin >> n;
	while (i <= n) {
		int j = 2;
		bool divided = false;
		while (j < i) {
			if (i % j == 0) {
				divided = true;
				break;
			}
			j++;
		}
		if (!divided) {
			cout << i << endl;
		}
		i++;
	}
	return 0;
}
