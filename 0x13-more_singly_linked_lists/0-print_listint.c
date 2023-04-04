#include "lists.h"
/**
 * print_listint - function to print all elements of a linked list
 * @h: head node of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
