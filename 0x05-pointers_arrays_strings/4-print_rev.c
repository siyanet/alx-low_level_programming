#include "main.h"

/**
  *print_rev -prints the string in reverse order
  *@s: the string
  */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		++i;
	}
	for (; i >= 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');

}
