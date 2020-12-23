#include <iostream>
using namespace std;

void PrintProperdivisor(int N)
{
	int i, total = 1;

	cout << total;		// 1 is the proper divisor of all numbers.

	for (i = 2; i < N; i++)
	{
		if (N%i == 0) {
			cout << " + " << i;
			total += i;
		}
	}

	cout << " = " << total;
}

int main(void)
{
	int N;

	cout << "Please enter a number: ";
	cin >> N;

	PrintProperdivisor(N);

	return 0;
}