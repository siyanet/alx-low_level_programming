#include "main.h"

/**
  *puts2 -prints character
  *@str: string
  *Return: none
  */
void puts2(char *str)
{
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
		i++;
	}
	for (n = 0; n < i; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);

		}
	}
	_putchar('\n');

}
