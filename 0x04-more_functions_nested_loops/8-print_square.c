#include "main.h"

/**
  *print_square -prints # in square for n times
  *@size: the square number
  */

void print_square(int size)
{
	int i, j;
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');

		}
		_putchar('\n');

	}
	_putchar('\n');

}
