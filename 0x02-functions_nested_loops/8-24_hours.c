#include "main.h"

/**
  *jack_bauer - print time
  */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(l + '0');
					
					_putchar(k + '0');

					_putchar(':');

					_putchar(j + '0');

					_putchar(i + '0');

					_putchar('\n');

				}
			}
		}
	}
}
