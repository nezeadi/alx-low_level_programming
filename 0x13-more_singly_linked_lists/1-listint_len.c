#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
