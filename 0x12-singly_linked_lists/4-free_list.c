#include <stdlib.h>
#include "lists.h"

/**
 * free_list - one argument
 * @head: pointer to list_t
 *
 * Description: frees a list
 * Return: dk
 */
void free_list(list_t *head)
{
	list_t *cursor;

	while (head)
	{
		cursor = head->next;
		free(head->str);
		free(head);
		head = cursor;
	}
}
