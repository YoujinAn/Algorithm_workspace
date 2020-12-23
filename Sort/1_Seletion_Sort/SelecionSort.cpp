/*
* Selection Sort
* 
* - It is slow [O(N^2)] and ineffective.
*/

#include <iostream>
using namespace std;

int main(void)
{
	int i, j,min, index, temp;
	int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };

	// Selection Sort
	for (i = 0; i < 10; i++) {
		min = 9999;	
		for (j = i; j < 10; j++) {
			if (min > array[j]) {
				min = array[j];
				index = j;
			}
		}

		// Swaping
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	// Print
	for (i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}

	return 0;
}