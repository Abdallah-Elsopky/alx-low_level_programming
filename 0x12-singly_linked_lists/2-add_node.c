#include "lists.h"

/**
 * add_node - two arguments
 * @head: double pointer
 * @str: string
 *
 * Description: new node at the beginning
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		if (new->str)
		{
			while (new->str[len])
				len++;
			new->len = len;
			new->next = *head;
			*head = new;
			return (new);
		}
		free(new);
		return (NULL);
	}
	return (NULL);
}
