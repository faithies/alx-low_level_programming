#include <stdio.h>

/**
 * main - codes entry point
 * Return: Always 0
 */
int main(void)
{

	long int sum = 0;
	int index;

	if ((index % 3 == 0) || (index % 5 == 0))
	{
		for (index = 0; index < 1024; index++)
		{
			sum = sum + index;
			printf("%ld", sum);
		}
	}
	else
	{
		printf("\n");
	}

	return (0);
}

