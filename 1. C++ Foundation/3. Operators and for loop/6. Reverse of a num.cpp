/*
Write a program to generate the reverse of a given number N. 
Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. 
For e.g., reverse of 10400 will be 401 instead of 00401.
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
	int reverse = 0, n;
	bool entered = false;
	cin >> n;
	while (n != 0) {
		int rem = n % 10;
		if ((rem == 0) && !entered) {
			n = n / 10;
			continue;
		} else {
			reverse = reverse * 10 + rem;
			entered = true;
		}
		n = n / 10;
	}
	cout << reverse << endl;

	return 0;
}
