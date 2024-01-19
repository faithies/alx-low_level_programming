#include "main.h"
#include <stdlib.h>

/**
 * create_array - function name
 * @size: number of elements to be created
 * @c: a character used for initializing each element of the array
 * Return: pointer to the allocated memory
 */

char *create_array(unsigned int size, char c)
{
	unsigned int iterator;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (iterator = 0; iterator < size; iterator++)
	{
		ptr[iterator] = c;
	}
		return (ptr);
}
