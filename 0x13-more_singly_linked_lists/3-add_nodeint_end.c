#include "lists.h"
/**
 * add_nodeint_end - a function that adds node at the
 * end of a linked list
 * @head: head of linked list
 * @n: data in node to be added at end of list
 *
 * Return: pointer to the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*declare and allocated new node. Also declare and pointer to hold last node*/
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	/*Insert data into the new node*/
	new_node->n = n;

	/*make new node point to null as it's next node making it the last*/
	new_node->next = NULL;

	/*check if linked list is empty and make new node the head node if it is*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/*else if linked list is not empty traverse list to obtain last node*/
	while (last->next != NULL)
	{
		last = last->next; /*move to the next node*/
	}

	/*make the next node of the last node be the new node*/
	last->next = new_node;

	return (new_node);
}

