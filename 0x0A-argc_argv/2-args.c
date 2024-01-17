#include <stdio.h>

/**
 * main - function nameand code entry point
 * @argc: argument count that checks the number of command line argument
 * @argv: argument vector and represent the argument supplied to the program
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
