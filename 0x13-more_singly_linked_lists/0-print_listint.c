#include "lists.h"
/**
 *print_listint - print all elements list
 *@h: list of nodes
 *Return: count of nodes
 */

size_t print_listint(const listint_t *h)
{
	 int ct = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		ct++;
	}
	return (ct);
}
