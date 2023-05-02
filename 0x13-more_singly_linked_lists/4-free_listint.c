#include "lists.h"

/**
 * free_listint - function to free a linked list
 * @head: head node of list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
