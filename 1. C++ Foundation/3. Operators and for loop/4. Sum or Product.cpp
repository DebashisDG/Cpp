/*
Write a program that asks the user for a number N and a choice C. 
And then give them the possibility to choose between computing the sum and 
computing the product of all integers in the range 1 to N (both inclusive).
If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)

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
	int n, c, sum = 0, prod = 1;
	cin >> n;
	cin >> c;
	if (c == 1) {
		for (int i = 1; i <= n; i++) {
			sum = sum + i;
		}
		cout << sum << endl;
	} else if (c == 2) {
		for (int i = 1; i <= n; i++) {
			prod = prod * i;
		}
		cout << prod << endl;
	} else {
		cout << -1 << endl;
	}

	return 0;
}
