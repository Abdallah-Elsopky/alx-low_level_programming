#include "lists.h"

/**
 * list_len - function
 * @h: const list_t
 *
 * Description: returns the number of elements
 * Return: elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
