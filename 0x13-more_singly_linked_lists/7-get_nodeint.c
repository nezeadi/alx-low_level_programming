#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: linked list
 * @index: node starting from 0
 * Return: nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*Declare variables (node & counter)*/
	listint_t *nth_node;
	unsigned int counter;

	nth_node = head;
	counter = 0;
	
	/*traverse linked list and assign nth node to variable nth_node*/
	while (nth_node != NULL && counter != index)
	{
		nth_node = nth_node->next;
		counter++;
	}
	if (index > counter)
		return (NULL);
	return (nth_node);
}
