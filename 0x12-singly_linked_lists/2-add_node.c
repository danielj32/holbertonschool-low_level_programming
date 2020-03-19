#include "lists.h"
/**
 *add_node - add new node begin list
 *@head: first node of list
 *@str: string
 *Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnod;

	newnod = malloc(sizeof(list_t));

	if (newnod)
	{
		if (str)
		{
			newnod->str = strdup(str);
		}
		newnod->len = _strlen(str);
		newnod->next = *head;
	}
	*head = newnod;
	return (newnod);
}

/**
 *_strlen - length of a string.
 *@str: pointer.
 *Return: ct.
 */

unsigned int _strlen(const char *str)
{
	unsigned int ct;

	while (*str != '\0')
	{
		ct++;
		str++;
	}
	return (ct);
}

