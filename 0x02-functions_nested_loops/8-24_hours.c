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
					_putchar(l);
					
					_putchar(k);

					_putchar(':');

					_putchar(j);

					_putchar(i);

					_putchar('\n');

				}
			}
		}
	}
}
