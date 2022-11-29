#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of linklist node
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
