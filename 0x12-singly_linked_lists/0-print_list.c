#include "lists.h"

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to the head of the list
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		i++;
	}

	return (i);
}
