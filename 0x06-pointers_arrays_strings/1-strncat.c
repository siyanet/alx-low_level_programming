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

	int j = 0;

	while (*dest != '\0')
	{
		dest++;

	}
	while (*src != '\0' && j <= n)
	{
		*dest = *src;

		dest++;

		src++;

		j++;

	}
	*dest = '\0';

	return (p);
}
