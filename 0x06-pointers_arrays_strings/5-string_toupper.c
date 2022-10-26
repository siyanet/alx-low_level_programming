#include "main.h"

/**
  *string_toupper - change strings to upper case
  *@s: character pointer
  *Return: pointer
  */
char *string_toupper(char *s)
{
	char *s1 = s;

	if (*s != '\0' && (*s >= 65 && *s <= 90))
	{
		s++;

	}
	else if (*s != '\0' && (*s >= 97 && *s <= 122))
	{
		*s = *s - 32;

		s++;

	}
	else if (*s != '\0')
	{
		s++;

	}
	return (s1);
}
