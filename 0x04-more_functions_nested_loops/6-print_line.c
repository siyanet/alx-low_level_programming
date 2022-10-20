#include "main.h"

/**
  *print_line -prints underscore n times
  *@n: number of times underscore will be printed
  */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
