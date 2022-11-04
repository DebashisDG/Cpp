/*
You have been given a random integer array/list(ARR) of size N, and an integer X. 
You need to search for the integer X in the given array/list using 'Linear Search'.
You have been required to return the index at which X is present in the array/list. 
If X has multiple occurrences in the array/list, then you need to return the index at which 
the first occurrence of X would be encountered. In case X is not present in the array/list, then return -1.
'Linear search' is a method for finding an element within an array/list. 
It sequentially checks each element of the array/list until a match is found or the whole array/list has been searched.

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
int linearSearch(int arr[], int n, int x) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			return i;
		}
	}
	return -1;
}
int main() {
	init_code();
	int arr[30], n, x, t;
	cin >> t ;
	for (int i = 1; i <= t; i++) {
		cin >> n;
		arrayInput(arr, n);
		cin >> x;
		cout << linearSearch(arr, n, x) << endl;
	}

	return 0;
}
