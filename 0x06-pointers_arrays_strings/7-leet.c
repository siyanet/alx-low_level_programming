#include "main.h"

/**
  *leet - change to 1337
  *@s: string
  *Return: pointer
  */
char *leet(char *s)
{
	int i, j;

	char a[] = "aAeEoOtTlL";

	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = b[j];

			}
		}
	}
	return (s);
}
