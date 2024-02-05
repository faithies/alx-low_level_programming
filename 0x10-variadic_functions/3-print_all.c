#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char *format, ...)
{
	va_list ap;
	int i;
	int found;
	va_start(ap, format);
	i = 0;

	while (*(format + i) != '\0')
	{
		found = 0;
		if (*(format + i) == 'c')
		{
			printf("%c", va_arg(ap, int));
			found = 1;
		}

		if (*(format + i) == 'i')
		{
			printf("%i", va_arg(ap, int));
			found = 1;
		}

		if (*(format + i) == 'f')
		{
			printf("%f", va_arg(ap, double));
			found = 1;
		}

		if (*(format + i) == 's')
		{
			printf("%s", va_arg(ap, char *));
			found = 1;
		}

		if (*(format + i + 1) == '\0')
		{
			printf("\n");
		}

		else if(found != 0);
		{
			printf(", ");
		}
		i++;
	}
}
