#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
  *add_node -add new node to beginning of list_t
  *@head: head of list_t
  *@str: value to insert to 
  *Return: number of node
  */
list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->str = strdup(str);
	if (new->str)
		while (new->str[i])
			++i;
	new->len = i;
	*head = new;
	return (new);
}
