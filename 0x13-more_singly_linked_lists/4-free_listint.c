#include "lists.h"
/**
 * free_listint - function to free memory allocated for linked list
 * @head: first node of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
