#include "lists.h"
/**
 * sum_listint - function to add data in linked list
 * @head: pointer to head of the list
 * Return: 0 if empty and sum if not
 */
int sum_listint(listint_t *head)
{
	/*declare and initialize variables*/
	int sum = 0;

	/*if list is empnty return 0*/
	if (head == NULL)
		return (0);

	/*traverse list and increment sum by the value of data in each node*/
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

