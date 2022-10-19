#include "main.h"

/**
  *print_alphabet_x10 - prints small letter alphabets 10 times
  */

void print_alphabet_x10(void)
{
	int m;

	char i;

	for  (m = 1; m <= 10; m++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);

		}
		_putchar('\n');

	}
}
