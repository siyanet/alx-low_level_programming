#include "main.h"

/**
  *print_triangle -prints triangle
  *@size: size of triangle
  */
void print_triangle(int size)
{
	int i, j, k;

	for (int i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			for (k = size; k > i; K--)
			{
				_putchar(' ');

			}
			_putchar('#');

		}
		-putchar('\n');

	}
	_putchar('\n');

}
