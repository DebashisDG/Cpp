/*
You have been given a sorted(in ascending order) integer array/list(ARR) of size N and an element X. 
Write a function to search this element in the given input array/list using 'Binary Search'. 
Return the index of the element in the input array/list. 
In case the element is not present in the array/list, then return -1.
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
int binarySearch(int arr[], int n, int x) {
	int start = 0, end = n - 1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (arr[mid] == x) {
			return mid;
		} else if (x < arr[mid]) {
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}
	return -1;
}
int main() {
	init_code();
	int arr[30], t, n, x;
	cin >> n;
	arrayInput(arr, n);
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> x;
		cout << binarySearch(arr, n, x);
		cout << endl;
	}

	return 0;
}
