#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function name
 * @width: The desired width of the 2D array.
 * @height: function parameter and diamension of a 2d array
 * Return: pointer to th newly allocated space in memory on success
 */
int **alloc_grid(int width, int height)
{
	int iterator1;
	int iterator2;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **)malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (iterator1 = 0; iterator1 < height; iterator1++)
	{
		ptr[iterator1] = (int *)malloc(sizeof(int) * width);

		if (ptr[iterator1] == NULL)
		{
			for (iterator2 = 0; iterator2 < iterator1; iterator2++)
			{
				free(ptr[iterator2]);
			}
			free(ptr);
			return (NULL);
		}

		for (iterator2 = 0; iterator2 < width; iterator2++)
		{
			ptr[iterator1][iterator2] = 0;
		}
	}
	return (ptr);
}
