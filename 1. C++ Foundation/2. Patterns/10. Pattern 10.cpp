/*
1
21
321
4321
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
		int j = 1, val = i;
		while (j <= i) {
			cout << val;
			j++;
			val--;
		}
		cout << endl;
		i++;
	}
	return 0;
}
