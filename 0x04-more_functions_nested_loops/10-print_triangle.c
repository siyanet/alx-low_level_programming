#include "main.h"

/**
  *print_triangle -prints triangle
  *@size: size of triangle
  */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');

	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (k = size - row; k >= 1; k--)
			{
				_putchar(' ');

			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
