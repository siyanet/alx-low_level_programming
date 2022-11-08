#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicate string
 *@str: pointer to string
 *Return: pointer
 */
char *_strdup(char *str)
{
	char *copy;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str != '\0')
	{
		len++;

	}
	copy = (char *)malloc((sizeof(char) * len) + 1);

	if (copy == NULL)
	{
		return NULL;
	}
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];

	}
	copy[len] = '\0';

	return (copy);
}
