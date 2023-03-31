#include "lists.h"
/**
 * free_list - free a singly linked list
 * @head: first node of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;	
		free(head->str);
		free(head);

		head = tmp;
	}
}
