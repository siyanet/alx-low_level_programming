#include "main.h"

/**
  *rot13 - change to 1337
  *@s: string
  *Return: pointer
  */
char *rot13(char *s)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";

	char b[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = b[j];

				break;

			}
		}
	}
	return (s);
}
