#include <stdio.h>

int main()
{

	int sum;
	int index;


	for (index = 0; index < 1024; index++)
	{
		if(index % 3 == 0 || index % 5 == 0)
		{
			sum = sum + index;
			
			_putchar('0' + sum);
		}
		else
		{
			_putchar('\n');

		}
	}

	return 0;
}

