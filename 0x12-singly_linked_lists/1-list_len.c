#include "lists.h"
/**
 * list_len -  to get no of elements in linked list
 * @h: linked list head
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
