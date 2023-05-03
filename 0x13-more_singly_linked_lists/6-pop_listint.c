#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: head node of list
 * Return: head node data (n)
 */
int pop_listint(listint_t **head)
{
	/*declare listint_t to hold head node to be deleted and n data of head*/
	listint_t *temp;
	int n2;

	if (head == NULL || *head == NULL)
		return (0);

	/*move head to the temp location and make the head->next the new head*/
	n2 = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n2);
}
