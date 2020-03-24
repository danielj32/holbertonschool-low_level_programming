#include "lists.h"
/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 *@head: first node
 *@idx: middle of list:
 *@n: num of elements.
 * Return: nod.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nod = NULL;
	listint_t *temp = NULL;
	unsigned int ct = 0;

	if (head == NULL)
		return (NULL);
	nod = malloc(sizeof(listint_t));
	if (nod ==  NULL)
		return (NULL);
	nod->n = n;
	nod->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = nod;
		nod->next = NULL;
		return (nod);
	}
	if (idx == 0)
	{
		nod->next = *head;
		*head = nod;
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

