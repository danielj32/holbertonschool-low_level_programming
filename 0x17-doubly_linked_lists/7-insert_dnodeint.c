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
	dlistint_t *nod = NULL;
	dlistint_t *temp = NULL;
	unsigned int ct = 0;

	if (h == NULL)
		return (NULL);
	nod = malloc(sizeof(dlistint_t));
	if (nod ==  NULL)
		return (NULL);
	nod->n = n;
	nod->next = NULL;
	temp = *h;
	if (temp == NULL)
	{
		*h = nod;
		nod->next = NULL;
		return (nod);
	}
	if (idx == 0)
	{
		nod->next = *h;
		*h = nod;
		return (nod);
	}
	while (ct != (idx - 1))
	{
		temp = temp->next;
		ct++;
		if (temp == NULL)
		{
			free(nod);
			return (NULL);
		}
	}
	nod->next = temp->next;
	temp->next = nod;
	return (nod);
}
