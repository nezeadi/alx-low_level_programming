#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of a linked list
 * @head: pointer to the linked list
 * @n: integer value to be added to the node
 * Return: pointer to new head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
