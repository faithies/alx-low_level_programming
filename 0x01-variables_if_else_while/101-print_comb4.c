#include <stdio.h>

/**
 * main - entry point of code
 * Return: Always 0 on success
 */

int main(void)
{
	int first_num;
	int second_num;
	int third_num;

	for (first_num = 0; first_num <= 9; first_num++)
	{
		for (second_num = 1; second_num <= 9; second_num++)
		{
			for (third_num = 2; third_num <= 9; third_num++)
			{
				if (third_num > second_num && second_num > first_num)
				{
					putchar(first_num + '0');
					putchar(second_num + '0');
					putchar(third_num + '0');


					if (first_num != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
