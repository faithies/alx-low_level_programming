#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - function name
 * _putchar - prints code to stdout
 * void: parameter null
 */

void jack_bauer(void)
{

	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((minute / 10) + 48);
			_putchar((minute % 10) + 48);
			_putchar('\n');
		}
	}
}
