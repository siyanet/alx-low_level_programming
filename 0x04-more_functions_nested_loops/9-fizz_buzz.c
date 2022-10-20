#include "main.h"

/**
  *main -prints 1 to 100 and fizz and buzz and fizzbuzz
  *Return: always 0
  */

int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			_putchar('F');

			_putchar('i');

			_putchar('z');

			_putchar('z');
		}
		else if (i % 5 == 0 &&  i % 3 != 0)
		{
			_putchar('B');

			_putchar('u');

			_putchar('z');

			_putchar('z');

		}
		else if (i % 5 == 0 && i % 3  == 0)
		{
			_putchar('F');

			_putchar('i');

			_putchar('z');

			_putchar('z');

			_putchar('B');

			_putchar('u');

			_putchar('z');

			_putchar('z');
		}
		else
		{
			_putchar(i + '0');

		}
	}
	return (0);

}
