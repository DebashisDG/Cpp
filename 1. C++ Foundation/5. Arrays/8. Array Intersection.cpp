/*
You have been given two integer arrays/list(ARR1 and ARR2) of size M and N, respectively. 
You need to print their intersection; An intersection for this problem can be defined when both the 
arrays/lists contain a particular value or to put it in other words, when there is a common value 
that exists in both the arrays/lists.
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
void intersection(int arr1[], int n1, int arr2[], int n2) {
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			if (arr1[i] == arr2[j]) {
				cout << arr1[i] << " ";
				arr2[j] = INT_MIN;
				break;
			}
		}
	}
}
int main() {
	init_code();
	int arr1[30], arr2[30], t;
	cin >> t ;
	for (int i = 1; i <= t; i++) {
		int n1, n2;
		cin >> n1;
		arrayInput(arr1, n1);
		cin >> n2;
		arrayInput(arr2, n2);
		intersection(arr1, n1, arr2, n2);
		cout << endl;
	}

	return 0;
}
