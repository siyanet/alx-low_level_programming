#include "main.h"

/**
  *puts_half -prints half of a string
  *@str: string
  *Return: nothing
  */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		++i;

	}
	j = i / 2;

	for (i = j; i <= 0; i++)
	{
		_putchar(str[i]);

	}
	_putchar('\n');

}
