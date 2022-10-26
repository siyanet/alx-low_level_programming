#include "main.h"

/**
  *_strncat - concatnate two strings
  *@dest: destination string
  *@src: source string
  *@n: number of source string
  *Return: pointer to destination string
  */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*dest != '\0')
	{
		dest++;

	}
	while (*src != '\0' && n--)
	{
		*dest = *src;

		dest++;

		src++;

	}
	*dest = '\0';

	return (p);
}
