#include "main.h"

/**
  *print_to_98 -prints number n to 98
  */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i);

			_putchar(',');

			_putchar(' ');
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i);

			_putchar(',');

			_putchar(' ');
		}
	}
	else
	{
		_putchar(
}
