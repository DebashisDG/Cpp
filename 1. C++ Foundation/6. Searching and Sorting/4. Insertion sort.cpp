/*
Provided with a random integer array/list(ARR) of size N, 
you have been required to sort this array using 'Insertion Sort'.
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
void insertionSort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int current = arr[i];
		int j;
		for (j = i - 1; j >= 0; j--) {
			if (current < arr[j]) {
				arr[j + 1] = arr[j];
			} else {
				break;
			}
		}
		arr[j + 1] = current;
	}
}
int main() {
	init_code();
	int arr[30], t, n;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n;
		arrayInput(arr, n);
		insertionSort(arr, n);
		arrayPrint(arr, n);
		cout << endl;
	}

	return 0;
}
