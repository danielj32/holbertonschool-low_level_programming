#include "lists.h"
/**
 *listint_len - print num elements list
 *@h: list of nodes
 *Return: count of nodes
 */

size_t listint_len(const listint_t *h)
{
	 int ct = 0;

	while (h)
	{
		h = h->next;
		ct++;
	}
	return (ct);
}
