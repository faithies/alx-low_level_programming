#include <stdio.h>

/**
 * print_array - function name
 * @a: function parameter
 * @n: function parameter
 */

void print_array(int *a, int n)
{
	int iterator;


	for (iterator = 0; iterator < n; ++iterator)
	{
		if (iterator != 0)
		{
			printf(",");
			printf(" ");
		}
		printf("%d", a[iterator]);

	}
	printf("\n");
}
