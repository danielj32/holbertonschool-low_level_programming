#include "lists.h"
/**
 * insert_dnodeint_at_index - check the code for Holberton School students.
 *@h: first node
 *@idx: middle of list:
 *@n: num of elements.
 * Return: nod.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *newnode = *h;
	unsigned int ct = 0;

	temp = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!*h || n < 0 || !temp)
		return (NULL);
	temp->n = n;
	while (newnode)
	{
		if (idx == ct)
		{
			temp->prev = newnode->prev;
			temp->next = newnode;
			newnode->prev = temp;
			temp->prev->next = temp;
			return (temp);
		}
		if (!newnode->next && idx == ct + 1)
			return (free(temp), add_dnodeint_end(h, n));
		newnode = newnode->next;
		ct++;
	}
	free(temp);
	return (NULL);
}
