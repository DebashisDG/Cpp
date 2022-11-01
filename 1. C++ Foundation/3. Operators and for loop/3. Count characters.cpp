/*
Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).
*/
#include<bits/stdc++.h>
using namespace std;

void init_code() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

int main() {
	init_code();
	char n;
	int alpha_sum = 0, digit_sum = 0, space_sum = 0;
	n = cin.get();
	while (n != '$') {
		if (n >= 97 && n <= 122) {
			alpha_sum++;
		} else if (n >= 48 && n <= 57) {
			digit_sum++;
		} else {
			space_sum++;
		}
		n = cin.get();
	}
	cout << alpha_sum << endl;
	cout << digit_sum << endl;
	cout << space_sum << endl;
	return 0;
}
