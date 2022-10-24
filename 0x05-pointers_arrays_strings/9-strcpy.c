#include "main.h"

/**
  *_strcpy -copy string
  *@src: source string
  *@dest: destination string
  *Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[i];

	}
	return (dest);
}
