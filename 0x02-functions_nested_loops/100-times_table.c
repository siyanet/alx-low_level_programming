#include "main.h"

/**
  *print_times_table -prints time table
  *@n: the number
  */
void print_times_table(int n)
{
	int i, j, k, l;

	if (l < 15 && l > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k < 9)
				{
					_putchar(k + '0');
				}
				else
				{
					_putchar(k / 10 + '0');

					_putchar(k % 10 + '0');
				}
				if(j != n)
				{
					_putchar(',');

					_putchar(' ');

				}

			}
			_putchar('\n');

		}
	}
}
