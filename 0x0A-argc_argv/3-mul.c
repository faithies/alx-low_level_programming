#include <stdio.h>
#include <stdlib.h>

/**
 * main - code entry point
 * @argc: argument count thats tell how many count is passed to command line
 * @argv: argument supplied to the program
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	if (argc < 3)
	{
	printf("%s", argv[0]);
	return (1);

	}

	printf("%d\n", result);

	return (0);
}
