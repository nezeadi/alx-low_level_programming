#include "lists.h"
/**
 * free_listint2 - function to free memory allocated for linked list
 * and set head to NULL
 * @head: first node of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;

	tmp = (*head)->next;
	*head = tmp;

	for (tmp = (*head)->next; *head != NULL; *head = tmp)
	{
		tmp = (*head)->next;
		free(*head);
	}
}
