#include "main.h"

/**
  *print_diagonal - prints diagonal
  *@n: the number the diagonal will be displayed
  */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');

		}
		_putchar('\\');

		_putchar('\n');

	}
	_putchar('\n');

}
