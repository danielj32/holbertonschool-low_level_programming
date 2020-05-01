#include "lists.h"
/**
 *dlistint_len - return num of nodes.
 *@h: is the head of the list
 * Return: num of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int ct = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		ct++;
	}
	return (ct);
}
