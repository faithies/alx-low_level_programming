#include <stdio.h>
#include "main.h"

void times_table(void)
{
	int nine;
	int times;

	for (nine = 0; nine <= 10; nine++)
	{
		for (times = 0; times <= 10; times++)
		{
		times = nine * times;
		}
		_putchar('\n');
	}
}
