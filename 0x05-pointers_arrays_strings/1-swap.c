#include "main.h"

/**
 * swap_int - function name
 * @a: function parameter
 * @b: function parameter
 */

void swap_int(int *a, int *b)
{
	int cup;
	cup = *a;

	*a = *b;

	*b = cup;	
}
