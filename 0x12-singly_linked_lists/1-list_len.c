#include "lists.h"

/**
 * list_len - function name that returns the number
 * of elements in a linked list
 * @h: pointer to the addresss of the first element
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
