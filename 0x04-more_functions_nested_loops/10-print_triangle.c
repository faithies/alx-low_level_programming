#include "main.h"

void print_triangle(int size)
{
	int new_size = size;
	int space;
	int character;
	int triangle;

	
	for (character = 0; character < size ; character++)
	{

		for(triangle = 0; triangle <= character; triangle++)
		{
			_putchar('#');
		}

			for (space = 1; space <= size - 1; space++)
			{
				_putchar(' ');
			}

		_putchar('\n');
		new_size = new_size - 1;
	}
}
