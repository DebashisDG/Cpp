/*
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Input Format :
3 integers - S, E and W respectively 
Output Format :
Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value. On Fahrenheit value and its corresponding Celsius value should be separate by tab ("\t")
*/
#include<bits/stdc++.h>
using namespace std;

void init_code() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

void fah_to_cel(int start, int end, int step) {
	int cel;
	while (start <= end) {
		cel = (5 * (start - 32)) / 9;
		cout << start << " " << cel << endl;
		start = start + step;
	}
}
int main() {
	init_code();
	int start, end, step;
	cin >> start >> end >> step;
	fah_to_cel(start, end, step);
	return 0;
}
