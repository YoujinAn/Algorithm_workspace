/*
* Bubble Sort
*
* - It is slow [O(N^2)]
* - Easiest to implement
* - The least efficient Sort
*/

#include <iostream>
using namespace std;

int main(void)
{
	int i, j, temp;
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };

	// Bubble Sort
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 9 - i; j++) {
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	// Print
	for (i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}

	return 0;
}