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
void selectionSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min = arr[i], temp_index = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < min) {
				min = arr[j];
				temp_index = j;
			}
		}
		int temp = arr[i];
		arr[i] = min;
		arr[temp_index] = temp;
	}
}
int main() {
	init_code();
	int arr[30], t, n;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n;
		arrayInput(arr, n);
		selectionSort(arr, n);
		arrayPrint(arr, n);
		cout << endl;
	}

	return 0;
}
