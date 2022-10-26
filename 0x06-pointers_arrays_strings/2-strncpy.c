#include "main.h"

/**
  *_strcat - concatnate two strings
  *@dest: destination string
  *@src: source string
  *Return: pointer to destination string
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (*dest != '\0')
	{
		dest++;

	}
	while (*src != '\0')
	{
		*dest = *src;

		dest++;

		src++;

	}
	*dest = '\0';

	return (p);
}
