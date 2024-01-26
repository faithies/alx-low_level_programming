#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function name that takes 3 arguments
 * the first being  pointer to an integer
 * the second being an integer
 * the third being a pointer that points to a function and the
 * function it points to takes an integer as an argument
 *
 * @array: pointer to an integer
 * @size: size of the array
 * @cmp: a pointer that takes an integer as an argument
 *
 * Return: returns the index of the first element for which
 * the compare function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int iterator;

	if (array == NULL || size <= 0)
	{
		return (-1);
	}
	else
	{

	for (iterator = 0; iterator < size; iterator++)
	{
		if (cmp(array[iterator]) != 0)
		{
			return (iterator);
		}
	}
	}
	return (-1);
}
