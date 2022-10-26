#include "main.h"

/**
  *_strncpy - copy string
  *@dest: destination string
  *@src: source string
  *@n: number of source string
  *Return: pointer to destination string
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (*src != '\0' && n--)
	{
		*dest = *src;

		dest++;

		src++;

	}
	*dest = '\0';

	return (p);
}
