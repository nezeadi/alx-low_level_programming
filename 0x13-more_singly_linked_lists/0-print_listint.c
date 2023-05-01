#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to the head of the list
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

