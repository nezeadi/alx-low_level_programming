#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node ata  given position
 * @head: head node of linked list
 * @idx: index of the list where node should be added
 * @n: data to be inserted in the node
 * Return: newly inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*declare variables and new_node*/
	listint_t *new_node, *prev_node, *next_node;
	unsigned int counter, counter2;

	/*allocate memory for the new_node and assign variables*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	prev_node = next_node = *head;
	counter = counter2 = 0;
	/*traverse list to retrieve previous and next nodes*/
	while (prev_node != NULL && counter != (idx - 1))
	{
		prev_node = prev_node->next;
		counter++;
	}

	while (next_node != NULL && counter2 != idx)
	{
		next_node = next_node->next;
		counter2++;
	}

	/*make next_node the next of new_node and new_node the next of prev_node*/
	new_node->next = next_node;
	prev_node->next = new_node;

	/*if idx is greater than list return NULL*/
	if (idx > counter2)
		return (NULL);
	/*return new node*/
	return (new_node);
}
