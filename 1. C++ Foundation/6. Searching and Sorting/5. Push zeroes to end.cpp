/*
You have been given a random integer array/list(ARR) of size N. 
You have been required to push all the zeros that are present in the array/list to the end of it. 
Also, make sure to maintain the relative order of the non-zero elements.
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
void push_zero(int arr[], int n) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0) {
			int temp = arr[k];
			arr[k] = arr[i];
			arr[i] = temp;
			k++;
		}
	}
}


int main() {
	init_code();
	int t, arr[30], n;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		cin >> n;
		arrayInput(arr, n);
		push_zero(arr, n);
		arrayPrint(arr, n);
		cout << endl;
	}


	return 0;
}
