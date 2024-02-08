#include "lists.h"

/**
 * free_list - a function name that frees a linked list
 * @head: a pointer to the allocated space in memory
 * to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
