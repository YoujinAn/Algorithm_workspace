// Age difference in the case of the largest age difference among N people.

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

int main(void)
{
	freopen("input.txt", "rt", stdin);

	int n, i, a, max = -2147000000, min = 2147000000;	//	"int" max, min value

	cin >> n;
	cout << "Total: " << n << endl;

	for (i = 1; i <= n; i++) {
		cin >> a;

		if (a > max) max = a;
		if (a < min) min = a;
	}

	cout << "The age of difference between two people: " << max - min;

	return 0;
}