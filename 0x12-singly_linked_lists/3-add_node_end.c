#include "lists.h"

/**
 * add_node_end - function name that adds a new at the end
 * of a linked list
 * @head: pointer to the first element of the linked list
 * @str: pointer to the duplicated string
 * Return: address of teh new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	unsigned int len = 0;

	temp = *head;

	while (str[len])

		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
