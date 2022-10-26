#include "main.h"

/**
  *_strcat - concatnate two strings
  *@dest: destination string
  *@src: source string
  *Return: pointer to destination string
  */
char *_strcat(char *dest, char *src)
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
