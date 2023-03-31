#include "lists.h"
/**
 * add_node - add a node at the begining of a linked list
 * @head: linked list
 * @str: string to be added to the node
 * Return: address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	/*allocate memory for node and initialize string*/
	list_t *new_node = malloc(sizeof(list_t));
	int str_len = 0;

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

	/*make head next node of the new node*/
	new_node->next = *head;

	/*make new node the head of linked list*/
	*head = new_node;

	return (new_node);
}
