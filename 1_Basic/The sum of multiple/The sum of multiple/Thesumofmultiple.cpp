#include <iostream>
using namespace std;

int CulTotalMultiNumbers(int n, int m) {
	int total = 0;

	for (int i = 1; i <= n; i++) {
		if (i % m == 0) {
			total += i;

			// Print the numbers
			cout << i << " ";
		}
	}

	return total;
}

int main(void)
{
	int N, M;
	int total = 0;

	cout << "Please enter a rage you want to know (3<=N<=1000): ";
	cin >> N;

	cout << "Please enter what a number do you want to know (3<=M<=1000): ";
	cin >> M;

	// Chekct range
	while (((M < 3) || (1000 < M)) || ((N < 3) || (1000 < N))) {
		cout << "Incorrect range number entered. Please enter again." << endl;
		cout << "Please enter a rage you want to know (3<=N<=1000): ";
		cin >> N;

		cout << "Please enter what a number do you want to know (3<=N<=1000): ";
		cin >> M;
	}

	total = CulTotalMultiNumbers(N, M);
	cout << endl << "The total is " << total << endl;

	return 0;
}