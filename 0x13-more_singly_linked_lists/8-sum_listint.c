#include "lists.h"

/**
 * sum_listint - function to sum all data(n) of a listint linked list
 * @head: head node of list
 * Return: integer sum
 */
int sum_listint(listint_t *head)
{
	/*declare variables*/
	int sum;

	/*initialize variables*/
	sum = 0;

	/**
	 * traverse through linked list
	 * and increment sum by the data value of each node
	 */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
