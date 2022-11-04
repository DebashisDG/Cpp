/*
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.

*/
#include<bits/stdc++.h>
using namespace std;

void init_code() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

void arrayInput(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void arrayPrint(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
int unique(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (arr[i] == arr[j]) {
				count++;
			}
		}
		if (count == 1) {
			return arr[i];
		}
	}
}
int main() {
	init_code();
	int arr[30], t;
	cin >> t ;
	for (int i = 1; i <= t; i++) {
		int n;
		cin >> n;
		arrayInput(arr, n);
		cout << unique(arr, n) << endl;
	}

	return 0;
}
