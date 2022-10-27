#include "main.h"

/**
  *string_toupper - change strings to upper case
  *@s: character pointer
  *Return: pointer
  */
char *string_toupper(char *s)
{
	char *s1 = s;

	while (*s != '\0')
	{
		if (*s >= 'a'  && *s <= 'z')
		{
			*s = *s - 32;

			s++;

		}
		else
		{
			s++;
		}
	}
	return (s1);
}
