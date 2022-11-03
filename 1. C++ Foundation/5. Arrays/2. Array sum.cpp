/*
Given an array of length N, you need to find and print the sum of all elements of the array
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
void sum(int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	cout << sum;
}
int main() {
	init_code();
	int arr[30], n;
	cin >> n;
	arrayInput(arr, n);
	sum(arr, n);

	return 0;
}
