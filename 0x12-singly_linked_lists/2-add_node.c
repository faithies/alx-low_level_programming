#include "lists.h"

/**
 * add_node - function name that adds a new node
 * at the begining of a linked list
 * @head: pointer to the head of the linked list
 * @str: pointer to a string of character that needs to be duplicated
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}


	while (str[len])
	len++;

		new = malloc(sizeof(list_t));
		if (!new)
		return (NULL);

		new->str = strdup(str);

		new->len = len;
		new->next = (*head);
		(*head) = new;
	return (*head);
}
