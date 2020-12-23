#include <iostream>
using namespace std;

void PrintNumbers(int A, int B) 
{
	int i, total = 0;
 
	for (i = A; i < B; i++) {
		cout << i << " + ";
		total += i;
	}

	cout << i << " = " << total + i;
}

int main(void)
{
	int A, B;

	cout << "Please enter two numbers(1<=A<b<=100): ";
	cin >> A >> B;

	while ((1 > A) || (A > B) || (B > 100)) {
		cout << "Incorrect range number entered. Please enter again." << endl;
		cout << "Please enter two numbers(1<=A<b<=100): ";
		cin >> A >> B;
	}

	PrintNumbers(A, B);

	return 0;
}