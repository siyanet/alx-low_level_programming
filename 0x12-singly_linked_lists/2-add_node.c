#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *_strlen -returns length of string
  *@s:  character
  *Return: value of i
  */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
  *add_node -add new node to beginning of list_t
  *@head: head of list_t
  *@str: value to insert to 
  *Return: number of node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = *head;
	*head = add;
	return (add);
}
