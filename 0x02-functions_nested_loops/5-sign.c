#include "main.c"

/**
  *print_sign -prints the sign of the number
  *Return: 1 if it is postive -1 if it is negative 0 if it is 0
  */
int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n > 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
}
