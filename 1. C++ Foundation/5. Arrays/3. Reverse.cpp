/*
Find the reverse of an array
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
void reverse(int arr[], int n) {
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
int main() {
	init_code();
	int arr[30], n;
	cin >> n;
	arrayInput(arr, n);
	reverse(arr, n);
	arrayPrint(arr, n);

	return 0;
}
