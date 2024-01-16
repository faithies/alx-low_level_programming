#include "main.h"
#include <unistd.h>

/**
 * _islower - function name
 * @c: function parameter
 * Return: 0 on error an 1 on success
 *
 */

int _islower(int c)
{

	while (c <= 122 && c >= 90)
	{
		if (c == 65 && c <= 90)
		{
			return (0);
		}

		return (1);
	}
	return (0);
}
