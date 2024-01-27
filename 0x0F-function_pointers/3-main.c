#include "3-calc.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - a function name that is designed to handle command line argument
 * and perform neccesary oprations
 * @argc: argument main function
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int arg1;
	int arg2;
	char *operator;

	int (*fun_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	operator = argv[2];

	fun_ptr = get_op_func(operator);

	if (fun_ptr == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0) && (argc == 0))
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", fun_ptr(arg1, arg2));

	return (0);
}
