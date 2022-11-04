/*
You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). 
Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging 
from 0 to 3 and among these, there is a single integer value that is present twice. 
You need to find and return that duplicate number present in the array.
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
		if (count == 2) {
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
