#include "main.h"

/**
  *print_times_table -prints time table
  *@n: the number
  */
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;

			_putchar(k + '0');

			_putchar(',');

			_putchar(' ');

		}
		_putchar('\n');

	}
}
