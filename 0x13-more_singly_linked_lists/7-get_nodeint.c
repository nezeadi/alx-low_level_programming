#include "lists.h"
/**
 * get_nodeint_at_index - return nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node in the list
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t *temp_node;
	
	temp_node = head;
	counter = 0;

	if (head == NULL)
		return (NULL);

	while (temp_node != NULL && counter != index)
	{
		counter++;
		temp_node = temp_node->next;
	}
	
	if (index > counter)
		return (NULL);
	return (temp_node);
}
