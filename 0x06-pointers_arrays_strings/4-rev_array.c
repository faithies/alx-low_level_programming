#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function name
 * @a: array of integer for swaps
 * @n: number of element in the array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int iterator;

	for (iterator = 0; iterator < n / 2; iterator++)
	{
		temp = a[iterator];
		a[iterator] = a[n - iterator - 1];
		a[n - iterator - 1] = temp;
	}

}
