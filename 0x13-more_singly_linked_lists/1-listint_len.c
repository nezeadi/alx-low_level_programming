#include "lists.h"
/**
 * listint_len - function to print all elements of a linked list
 * @h: head node of the list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
