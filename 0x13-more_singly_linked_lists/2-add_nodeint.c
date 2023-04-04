#include "lists.h"
/**
 * add_nodeint - add a node at the beginning of a
 * linked list
 * @head: head of the list
 * @n: integer to be inserted in the node
 *
 * Return: pointer to a node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*allocate node*/
	listint_t *new_node = malloc(sizeof(listint_t));

	/*insert data into the node*/
	if (new_node != NULL)
	{
		new_node->n = n;
	}
	else
	{
		return (NULL);
	}

	/*make the prev head the next of the newly added node*/
	new_node->next = *head;

	/*make the newly added node the new head of the list*/
	*head = new_node;

	return (new_node);
}
