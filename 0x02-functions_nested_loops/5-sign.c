#include "main.h"

/**
  *print_sign -prints the sign of the number
  *@n: the number
  *Return: 1 if it is postive -1 if it is negative 0 if it is 0
  */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else
	{
		_putchar('-');

		return (-1);
	}
}
