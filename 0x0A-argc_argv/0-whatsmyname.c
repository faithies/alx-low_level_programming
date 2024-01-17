#include <stdio.h>

/**
 * main - This is the entry point of the program
 * @argc: parameter that contains the number of arguments passed to the program
 * @argv: parameter that is an argument vector and
 * this is a one diamensional array of strings
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{

		printf("%s\n", argv[0]);
	}
	return (0);
}
