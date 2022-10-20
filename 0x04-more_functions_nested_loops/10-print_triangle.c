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
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			for (k = size; k > i; k--)
			{
				_putchar(' ');

			}
			_putchar('#');

		}
		_putchar('\n');

	}
}
