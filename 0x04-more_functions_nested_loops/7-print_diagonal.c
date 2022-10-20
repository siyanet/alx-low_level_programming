#include "main.h"

/**
  *print_diagonal - prints diagonal
  *@n: the number the diagonal will be displayed
  */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');

	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');

		}
		_putchar('\\');

		_putchar('\n');

	}
}
