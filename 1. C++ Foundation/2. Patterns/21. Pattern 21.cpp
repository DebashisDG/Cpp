/*
   1
  232
 34543
4567654
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
		int val = i;
		while (j <= i) {
			cout << val;
			j++;
			val++;
		}
		int k = j - 2;
		int temp = val - 2;
		while (k >= 1) {
			cout << temp;
			k--;
			temp--;
		}
		cout << endl;
		i++;
	}
	return 0;
}
