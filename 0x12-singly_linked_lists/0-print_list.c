#include "lists.h"

/**
 * print_list - function to print linked-list elements
 * @h: pointer to linked list node
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		counter++;
	}
	return (counter);
}

