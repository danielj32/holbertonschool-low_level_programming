#include "lists.h"
/**
 *list_len - prints all the elements
 *@h: head of nodes
 *Return: counter
 */

size_t list_len(const list_t *h)
{
	int ct = 0;

	while (h != NULL)
	{
		h = h->next;
		ct++;
	}
	return (ct);
}
