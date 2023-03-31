#include "lists.h"
/**
 * add_node_end - add a node at the end of alinked list
 * @head: head node of a linked list
 * @str: string to be added to the new node
 * Return: pointer to new node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/*allocate memory for nodes and initialize string length counter*/
	list_t *new_node = malloc(sizeof(list_t));
	int str_len = 0;

	list_t *last_node = *head;

	/*get string length*/
	for (str_len = 0; str[str_len] != '\0'; str_len++)
	{
	}

	/*add data to the node*/
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = str_len;
	}
	else
	{
		return (NULL);
	}

	/*make next node of the new node to be NULL*/
	new_node->next = NULL;

	/*if linked list is empty new node becomes the head node*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/*if linked list is not empty traverse and get last node*/
	while (last_node->next != NULL)
	{
		last_node = last_node->next; /*move to the next node*/
	}

	/*make the next of the prev last node to now become the new node*/
	last_node->next = new_node;
	return (new_node);
}
