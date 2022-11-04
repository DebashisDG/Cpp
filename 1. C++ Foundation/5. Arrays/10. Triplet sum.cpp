/*
You have been given a random integer array/list(ARR) and a number X. 
Find and return the number of triplets in the array/list which sum to X.
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
int pair_sum(int arr[], int n, int x) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++ ) {
				// cout << "i:" << i << " j:" << j << " k:" << k << " ";
				if (arr[i] + arr[j] + arr[k] == x) {
					count++;
					// cout << "count:" << count << " ";
				}
			}
			// cout << endl;
		}
	}
	return count;
}
int main() {
	init_code();
	int arr[30], t;
	cin >> t ;
	for (int i = 1; i <= t; i++) {
		int n, x;
		cin >> n;
		arrayInput(arr, n);
		cin >> x;
		cout << pair_sum(arr, n, x);
		cout << endl;
	}

	return 0;
}
