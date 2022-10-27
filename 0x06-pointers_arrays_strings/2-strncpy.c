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
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);

	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';

	}
	return (dest);
}
