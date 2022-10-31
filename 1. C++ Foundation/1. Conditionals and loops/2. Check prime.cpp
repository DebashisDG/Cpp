/*
Check whether a number is prime or not
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
	int i = 2;
	bool divided = false;
	while (i < n) {
		if (n % i == 0) {
			cout << "Not prime" << endl;
			divided = true;
		}
		i = i + 1;
	}
	if (!divided) {
		cout << "Prime" << endl;
	}
	return 0;
}
