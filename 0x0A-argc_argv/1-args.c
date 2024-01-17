#include <stdio.h>

/**
 * main - code entry point or start of code
 * @argc: argument count to be printed
 * @argv: argument vector set to unused
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int iterator;
	int length;

	length = 0;

	if (argc == 1)
	{
		printf("%d\n", length);
	}
	else if (argc > 1)
	{
		for (iterator = 1; iterator < argc; iterator++)
		{
			length = length + 1;
		}
		printf("%d\n", length);
	}
	return (0);
}
