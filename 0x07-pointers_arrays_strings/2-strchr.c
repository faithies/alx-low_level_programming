#include "main.h"



char *_strchr(char *s, char c)
{
	int iterator = 0;

	for (iterator = 0; iterator != c; iterator++)
	{
		s++;
	}
	return (*s);;
}
