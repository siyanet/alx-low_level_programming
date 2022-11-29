#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list.
 * @h: head pointer
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = h;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
