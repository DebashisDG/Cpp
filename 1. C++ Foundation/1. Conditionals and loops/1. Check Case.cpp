/*
Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabet
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
	char n;
	cin >> n;
	if (n >= 65 && n <= 90) {
		cout << 1 << endl;
	} else if (n >= 97 && n <= 122) {
		cout << 0 << endl;
	} else {
		cout << -1 << endl;
	}
	return 0;
}
