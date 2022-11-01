/*
  *
 ***
*****
 ***
  * 
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
	int upper = (n / 2) + 1;
	while (i <= upper) {
		int spaces = 1;
		while (spaces <= upper - i) {
			cout << " ";
			spaces++;
		}
		int j = 1;
		while (j <= (2 * i - 1)) {
			cout << '*';
			j++;
		}
		cout << endl;
		i++;
	}
	int x = n / 2;
	int lower = n / 2;
	while (x >= 1) {
		int spaces = 1;
		while (spaces <= lower - x + 1) {
			cout << " ";
			spaces++;
		}
		int j = 1;
		while (j <= (2 * x - 1)) {
			cout << "*";
			j++;
		}
		x--;
		cout << endl;
	}
	return 0;
}
