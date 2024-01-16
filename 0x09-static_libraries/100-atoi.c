#include "main.h"

/**
 * _atoi - function name
 * @s: strings to be converted
 * Return: result on succes
 */

int _atoi(char *s)
{
	int iterator = 0;
	int sign = 1;
	int answer = 0;

	while(s[iterator] == ' ')
	{
		iterator++;
	}

	if (s[iterator] == '-')
	{
		sign = -1;
		iterator++;
	}

	else if (s[iterator] == '+')
	{
		iterator++;
	}

	while (s[iterator] >= '0' && s[iterator] <= '9')
	{
		answer = answer * 10 + (s[iterator] - '0');
		iterator++;
		return sign * answer;
	}
	return (0);
}

