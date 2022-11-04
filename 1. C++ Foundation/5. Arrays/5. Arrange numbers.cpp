/*
You have been given an empty array(ARR) and its size N. The only input taken from the user will 
be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) 
in the order - 1,3,.......4,2.

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
void arrange(int arr[], int n) {
	int val = 1;
	for (int i = 0; i <= (n - 1) / 2; i++) {
		arr[i] = val;
		val = val + 2;
	}
	if (n % 2 == 0) {
		val = n;
	} else {
		val = n - 1;
	}
	for (int i = ((n - 1) / 2) + 1; i < n; i++) {
		arr[i] = val;
		val = val - 2;
	}
}
int main() {
	init_code();
	int arr[30], t;
	cin >> t ;
	for (int i = 1; i <= t; i++) {
		int n;
		cin >> n;
		arrange(arr, n);
		arrayPrint(arr, n);
		cout << endl;
	}

	return 0;
}
