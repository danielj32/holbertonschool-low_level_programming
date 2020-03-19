#include "lists.h"
/**
 *print_list - prints all the elements
 *@h: head of nodes
 *Return: counter
 */
size_t print_list(const list_t *h)
{
	int ct = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			ct++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		ct++;
	}
	return (ct);
}
