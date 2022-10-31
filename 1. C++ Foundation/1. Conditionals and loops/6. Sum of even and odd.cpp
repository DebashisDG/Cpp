/*
Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
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
	int n, rem, even_sum = 0, odd_sum = 0;
	cin >> n;
	while (n != 0) {
		rem = n % 10;
		if (rem % 2 == 0) {
			even_sum = even_sum + rem;
		} else {
			odd_sum = odd_sum + rem;
		}
		n = n / 10;
	}
	cout << even_sum << endl;
	cout << odd_sum << endl;
	return 0;
}
