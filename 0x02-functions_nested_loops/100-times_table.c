#include "main.h"
/**
 * print_times_table - function name
 * @n: function parameter
 */
void print_times_table(int n)
{
	int iterator;
	int result;
	int mul;

	if (n < 15 &&  n >=  0)
	{
		for (iterator = 0; iterator <= n; iterator++)
		{
			_putchar('0');
			for (result = 1; result <= n; result++)
			{
				mul = iterator * result;
				_putchar(',');
				if (mul > 99)
				{
					_putchar(' ');
					_putchar((mul / 100) + '0');
					_putchar(((mul % 100) / 10)   + '0');
					_putchar((mul % 10) + '0');

				}
				else if (mul > 9 && mul < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');

				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
			}
			_putchar('\n');
		}
	}
}
