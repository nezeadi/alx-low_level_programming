#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: Head node of linked list to be deleted
 * Return: 0 if list is empty and integer content of node if its not
 */
int pop_listint(listint_t **head)
{
	/*initialize place holder note for head and for integer in n*/
	listint_t *temp_node;
	int n_holder;

	/*Assign value of head to place holder*/
	temp_node = *head;

	/*check if list is empty and return 0*/
	if (*head == NULL)
		return (0);

	/*assign node after head to be the new head*/
	*head = (*head)->next;

	/*free memory of place holder node earlier initialized*/
	n_holder = temp_node->n;
	free(temp_node);
	return (n_holder);
}
