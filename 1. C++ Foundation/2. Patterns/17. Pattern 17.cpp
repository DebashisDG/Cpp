/*
   1
  121
 12321
1234321
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
	int i = 1;
	while (i <= n) {
		// Spaces
		int spaces = 1;
		while (spaces <= n - i) {
			cout << " ";
			spaces++;
		}
		int j = 1;
		while (j <= i) {
			cout << j;
			j++;
		}
		int k = i - 1;
		while (k >= 1) {
			cout << k;
			k--;
		}
		cout << endl;
		i++;
	}
	return 0;
}
