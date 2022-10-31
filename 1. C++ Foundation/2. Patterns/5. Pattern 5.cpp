/*
   1
  23
 345
4567
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
		int sp = 1;
		while (sp <= n - i) {
			cout << " ";
			sp++;
		}

		int j = 1;
		int val = i;
		while (j <= i) {
			cout << val;
			val++;
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}
