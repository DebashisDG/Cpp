/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
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
	int x, n;
	cin >> x >> n;
	int i = 1;
	int temp = x;
	while (i < n) {
		x = x * temp;
		// x= 2, n = 3
		i++;
	}
	cout << x << endl;
	return 0;
}
