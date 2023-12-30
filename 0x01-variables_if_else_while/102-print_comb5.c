#include <stdio.h>

/**
 * main - function name
 * Return: Always 0 on success
 */

int main(void)
{
	int first_num;
	int second_num;

	for (first_num = 0; first_num < 100; first_num++)
	{
		for (second_num = 0; second_num < 100; second_num++)
		{
			if (first_num < second_num)
			{
				putchar('0' + (first_num / 10));
				putchar('0' + (first_num % 10));
				putchar(' ');
				putchar('0' + (second_num / 10));
				putchar('0' + (second_num % 10));

			if (second_num != 99 || first_num != 98)
			{
				putchar(',');
				putchar(' ');
			}

			}
		}

	}

putchar('\n');
return (0);
}
