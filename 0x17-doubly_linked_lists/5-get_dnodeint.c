#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node.
 *@head: list of beg.
 *@index: list of num
 * Return: head.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ct = 0;

	while (ct < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		ct++;
	}
	return (head);
}
