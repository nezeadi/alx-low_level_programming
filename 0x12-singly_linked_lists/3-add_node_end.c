#include "lists.h"

/**
 * add_node_end - add a node at end of linked list
 * @head: linked list first node
 * @str: data to be added to list node
 * Return: pointer to new node of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/*declare variables*/
	int str_len;
	list_t *new_node;
	list_t *last;

	/*allocate node & assign variables*/
	for (str_len = 0; str[str_len] != '\0'; str_len++)
	{
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	last = *head;

	/*place data into the new_node*/
	new_node->str = strdup(str);
	new_node->len = str_len;
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

