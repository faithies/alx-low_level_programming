#include <stdio.h>

/**
 * main - codes entry point
 * Return: Always 0
 */
int main(void)
{

	long int sum = 0;
	int index;


	for (index = 0; index < 1024; index++)
	{
		if (index % 3 == 0 || index % 5 == 0)
		{
			sum = sum + index;
			printf("%d", sum);
		}
		else
		{
		printf("\n");
		}
	}

	return (0);
}

