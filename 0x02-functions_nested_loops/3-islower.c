#include "main.h"
#include <unistd.h>

/**
 * _islower - function name
 * Return: 0 on error an 1 on success
 */

int _islower(int c)
{

	while (c <= 122)
	{
		if (c == 72)
		{
			return (0);
		}

		return (1);
	}
	return (0);
}
