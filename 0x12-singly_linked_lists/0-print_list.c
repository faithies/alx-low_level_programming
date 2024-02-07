#include "lists.h"

/**
 * print_list - function nae that prints all elements of a
 * linked list and returns the number of nodes
 *
 * @h: pointer to the first element of the list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;


	while (h)
	{

		if (!h->str)
		{
			printf("[0] (nil)\n");

		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;

		count++;

	}

	return (count);
}
