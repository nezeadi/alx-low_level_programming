#include "lists.h"

/**
 * add_nodeint_end - add a node at end of linked list
 * @head: linked list first node
 * @n: integer to be added to list node
 * Return: pointer to new node of list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*declare variables*/
	listint_t *new_node;
	listint_t *last;

	/*allocate node & assign variables*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	last = *head;

	/*place data into the new_node*/
	new_node->n = n;
	new_node->next = NULL;

	/*if list is empnty then make new_node head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/*else traverse list to last node*/
	while (last->next != NULL)
		last = last->next;

	/*make the next of the last node to be new_node*/
	last->next = new_node;
	return (new_node);
}
