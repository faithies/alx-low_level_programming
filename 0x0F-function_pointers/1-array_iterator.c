#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function name that takes three argument 
 * and executes the purpose of its given parameter
 * the first argument is a pointer to an interger
 * the second is an array size
 * the third is a pointer to a function that takes
 * an integer as its argument and returns a void
 * @array: this is a pointer to an an array of integer to be listed
 * @size: this tells the size of the array
 * @action: this is a pointer to a function that takes
 * an integer as its argument
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iterator;

	if (action == NULL || array == NULL)
	{
		return;
	}

	for (iterator = 0; iterator < size; iterator++)
	{
		(action)(array[iterator]);
	}
}
