#include "lists.h"

/**
 * add_node - add a node at the begining of a linked list
 * @head: first node of the list
 * @str: string to be added to the element
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	/*declare variables and allocate node*/
	int str_len;
	list_t *new_node;

	str_len = 0;
	for (str_len = 0; str[str_len] != '\0'; str_len++)
	{
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/*place data in the node*/
	new_node->str = strdup(str);
	new_node->len = str_len;
	/*make next of new node as head*/
	new_node->next = *head;

	/*make the head to point to the new node*/
	*head = new_node;

	return (new_node);
}
